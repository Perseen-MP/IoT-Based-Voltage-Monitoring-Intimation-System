#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "YOUR_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

float calibrationFactor = 850.0;   // Your calibrated value


// Pin Definitions
#define VOLTAGE_PIN 34
#define LED_NORMAL 18
#define LED_HIGH 19
#define LED_LOW 21

// Voltage Limits
float highLimit = 300.0;
float lowLimit = 190.0;
float normalMin = 210.0;
float normalMax = 230.0;

bool highAlertSent = false;
bool lowAlertSent = false;

void setup()
{
  Serial.begin(115200);

  pinMode(LED_NORMAL, OUTPUT);
  pinMode(LED_HIGH, OUTPUT);
  pinMode(LED_LOW, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

float readVoltage()
{
   int minVal = 4095;
  int maxVal = 0;

  // Take 1000 samples
  for (int i = 0; i < 1000; i++)
  {
    int adc = analogRead(VOLTAGE_PIN);

    if (adc > maxVal) maxVal = adc;
    if (adc < minVal) minVal = adc;
  }

  int peakToPeak = maxVal - minVal;

  // Convert ADC difference to voltage
  float vpp = (peakToPeak * 3.3) / 4095.0;

  // Convert peak-to-peak to RMS (approximation)
  float vrms = (vpp / 2.0) * 0.707;

  float actualVoltage = vrms * calibrationFactor;

  Serial.print("Voltage: ");
  Serial.println(actualVoltage);

  return actualVoltage - 25;
  //delay(20);
}

void loop()
{
  Blynk.run();

  float voltage = readVoltage();
  Serial.println(voltage);

  // Send voltage to Blynk (Virtual Pin V0)
  Blynk.virtualWrite(V0, voltage);

  // HIGH VOLTAGE
  if (voltage > highLimit)
  {
    Serial.println("HIGH");
    digitalWrite(LED_HIGH, HIGH);
    digitalWrite(LED_NORMAL, LOW);
    digitalWrite(LED_LOW, LOW);

    if (!highAlertSent)
    {
      Blynk.logEvent("high_voltage", "High Voltage Detected!");
      highAlertSent = true;
      lowAlertSent = false;
    }
  }

  // LOW VOLTAGE
  else if (voltage < lowLimit)
  {
    Serial.println("LOW");
    digitalWrite(LED_LOW, HIGH);
    digitalWrite(LED_NORMAL, LOW);
    digitalWrite(LED_HIGH, LOW);

    if (!lowAlertSent)
    {
      Blynk.logEvent("low_voltage", "Low Voltage Detected!");
      lowAlertSent = true;
      highAlertSent = false;
    }
  }

  // NORMAL VOLTAGE
  else
  {
    Serial.println("NORMAL");
    digitalWrite(LED_NORMAL, HIGH);
    digitalWrite(LED_HIGH, LOW);
    digitalWrite(LED_LOW, LOW);

    highAlertSent = false;
    lowAlertSent = false;
  }

  delay(1000);
}