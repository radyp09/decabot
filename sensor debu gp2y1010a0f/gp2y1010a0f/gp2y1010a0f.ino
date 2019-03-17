const int pinGP2Y = A0;
int pinLED = 3;
int samplingTime = 280;
int deltaTime = 40;
int sleepTime = 9680;

void setup() {
  Serial.begin(9600);
  pinMode(pinLED,OUTPUT);

}

void loop() {
  digitalWrite(pinLED,LOW); // Turn On the LED
  delayMicroseconds(samplingTime);
  
  float voMeasured = analogRead(pinGP2Y); // Read the dust value
  delayMicroseconds(deltaTime);
  
  digitalWrite(pinLED,HIGH); // Turn Off the LED
  delayMicroseconds(sleepTime);
  
  float calcVoltage = voMeasured * (3.3/1024);
  // linear equation taken from http://www.howmuchsnow.com/arduino/airquality/
  // Chris Nafis (c) 2012
  float dustDensity = (0.17 * calcVoltage - 0.1)*1000;
  if (dustDensity < 0){
    dustDensity = 0;
  }

  Serial.print("Raw signal value (0-1023): "); Serial.print(voMeasured);
  Serial.print(" - Voltage: "); Serial.print(calcVoltage);
  Serial.print(" - Density : "); Serial.println(dustDensity);
  delay(1000);
}
