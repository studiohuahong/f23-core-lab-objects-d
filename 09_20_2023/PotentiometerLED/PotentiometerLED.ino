/*
potentiometer controll LED brightness
PUDT 2101-D, 09/20/2023
*/

int sensorPin = A0;   // select the input pin for the potentiometer
int ledPin = 9;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  //set the baud rate of serial to 9600 for communication
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);  // read the value from the sensor
  sensorValue = map(sensorValue, 0, 1023, 0, 255); // map the analog value from 0-1023 to 0-255
  analogWrite(ledPin, sensorValue);
  Serial.println(sensorValue); // print the analog value to serial monitor
  delay(100);
}
