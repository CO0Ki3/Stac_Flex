#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);
int flex_top = A0;
int flex_mid = A3;
int flex_bot = A5;

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("C");
  BTSeial.println("C");
}

void loop() {
  int flexTopValue;
  int flexMidValue;
  int flexBotValue;
  
  flexTopValue = analogRead(flex_top);
  flexMidValue = analogRead(flex_mid);
  flexBotValue = analogRead(flex_bot);

  Serial.print("Top: ");
  Serial.println(flexTopValue);
  Serial.print("Mid: ");
  Serial.println(flexMidValue);
  Serial.print("Bot: ");
  Serial.println(flexbotValue);

  delay(1000);
}
