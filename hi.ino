#include <Servo.h>
const int trigPin = 9;
const int echoPin = 10;
int servoPin = 11;
Servo servo;
int angle = 0;  // servo position in degrees

void setup() {
    servo.attach(servoPin);
    pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of the pulse on the echo pin
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;
  
  // If an object is detected within 100cm (adjust this threshold as needed)
  if (distance <=20 && distance!=0) {
    Serial.print("Motion detected at a distance of ");
    Serial.print(distance);
    Serial.println(" cm");
    for(angle = 0; angle < 90; angle++) {
        servo.write(angle);
        delay(5);
    }
    
    // now scan back from 180 to 0 degrees
    for(angle = 90; angle > 0; angle--) {
        servo.write(angle);
        delay(5);
  }
  }
}
  
  