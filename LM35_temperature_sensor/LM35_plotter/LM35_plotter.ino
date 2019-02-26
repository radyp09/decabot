// Inisiasi global variable
    const int pinAnalog = 0;
    float ADCrng = 1024.0;
    int ADCvalue;
    

void setup(){
  Serial.begin(9600);     // inisiasi serial komunikasi dengan baudrate 9600
}
void loop(){
  // mendapatkan ADCvalue dari pin analog
      ADCvalue = analogRead(pinAnalog);

  // Mengkonversi nilai ADCvalue menjadi miliVolt (mV)
      float mV = (ADCvalue / ADCrng)* 5000.0; 

  // Mengkonversi nilai mV menjadi satuan suhu yaitu derajad celcius
  // Gunakan persamaan centrigrade persamaan 1.
      float celc = mV/10.0;
  
      Serial.println(celc);
      delay(100);

}

//float farh = (cel*9)/5 + 32;
