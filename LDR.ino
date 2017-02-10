#include <Servo.h>

Servo servo;

const byte buzzer = 8;
const byte servoPin = 9;
void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
  servo.write(0);
  delay(1000); 
}
int ldrValue;
void loop() {
  ldrValue = analogRead(A0);
  Serial.println(ldrValue);
  if (ldrValue < 1000)
  {
    digitalWrite(buzzer, HIGH);
    servo.write(0);
    
  }
  else
  {
    digitalWrite(buzzer, LOW);
    servo.write(90);
    delay(1000);
   }
}
