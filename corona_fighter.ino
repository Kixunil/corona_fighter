#include <Servo.h>

Servo myservo;


void setup() {
  Serial.begin(9600);
  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  digitalWrite(7, LOW);
  delayMicroseconds(2);
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  unsigned long duration = pulseIn(8, HIGH);
  
  Serial.println(duration);
  
  if(duration < 1212) {
    myservo.attach(6);
    myservo.write(0);
    delay(10000);
    myservo.write(120);
    delay(2000);
    myservo.detach();
    delay(100);
  }  
}
