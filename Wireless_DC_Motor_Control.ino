#define BLYNK_TEMPLATE_ID "TMPLxxxxxxx"
#define BLYNK_TEMPLATE_NAME "MotorControl"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YourWiFiSSID";
char pass[] = "YourWiFiPassword";

// Motor pins
#define IN1 D1
#define IN2 D2
#define ENA D3

// Optional physical LED pin (or use virtual LED on Blynk)
#define LED_PIN D4

int motorSpeed = 0;
bool motorState = false;

void setup() {
  Serial.begin(115200);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // Initially turn off motor and LED
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
  digitalWrite(LED_PIN, LOW);

  Blynk.begin(auth, ssid, pass);
}

// ON/OFF Switch on V0
BLYNK_WRITE(V0) {
  motorState = param.asInt();

  if (motorState) {
    digitalWrite(IN1, HIGH);  // Motor forward
    digitalWrite(IN2, LOW);
    analogWrite(ENA, motorSpeed);
    digitalWrite(LED_PIN, HIGH);  // LED ON
    Blynk.virtualWrite(V2, 255);  // Blynk LED ON
  } else {
    analogWrite(ENA, 0);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(LED_PIN, LOW);   // LED OFF
    Blynk.virtualWrite(V2, 0);    // Blynk LED OFF
  }
}

// Speed Slider on V1 (range 0–1023)
BLYNK_WRITE(V1) {
  motorSpeed = param.asInt();
  if (motorState) {
    analogWrite(ENA, motorSpeed);
  }
}

void loop() {
  Blynk.run();
}
