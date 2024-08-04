// Define Pins
#include <Servo.h>
Servo servo;

int trigPin = 11;
int echoPin = 12;
int buzzerPin = 10; // Define the buzzer pin

// Defines variables
long duration;
int distance;

void setup() {
  servo.attach(13);
  servo.write(180);
  delay(2000);

  // Sets the trigPin as an Output
  pinMode(trigPin, OUTPUT);
  // Sets the echoPin as an Input 
  pinMode(echoPin, INPUT);
  // Sets the buzzerPin as an Output
  pinMode(buzzerPin, OUTPUT);

  // Initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;

  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  // Check distance and actuate servo and buzzer accordingly
  
  if (distance <= 2) { // Change Distance according to Ultrasonic Sensor Placement
    servo.write(90);
    digitalWrite(buzzerPin, LOW); // Turn on the buzzer
  } else {
    servo.write(180);
    digitalWrite(buzzerPin, HIGH); // Ensure buzzer is off
  }

  // Delay to avoid too frequent updates
  delay(100);
}
