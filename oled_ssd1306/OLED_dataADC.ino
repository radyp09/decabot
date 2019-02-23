// Panggil Library
    #include <Adafruit_GFX.h>
    #include <Adafruit_SSD1306.h>
    #include <Wire.h>

// Pendefinisian parameter
    #define oled 0x3c             // i2c comm address for OLED
    #define OLED_RESET 4
    #define pinADC A0

    int ADCvalue;
    
// Inisiasi display OLED
    Adafruit_SSD1306 display(OLED_RESET);

void setup(){
  // Memulai fungsi OLED
      display.begin(SSD1306_SWITCHCAPVCC, oled);

  // Menghapus OLED pertama kali, jika tidak dihapus akan ada simbol Adafruit.
      display.clearDisplay();  
      
  // Untuk mendapatkan efek display
      display.display();  

}

void loop() {
    // Code untuk menampilkan nilai ADC pada Channel ADC (A0-A5)
          getADC(pinADC);

}

int getADC(int pin){
      ADCvalue = analogRead(pin);
      display.clearDisplay();                     // di clear, agar angka lama tidak ditimpa oleh angka yang baru
      display.setTextSize(1);                     // menentukan ukuran font (Font size)
      display.setTextColor(WHITE);                // menentukan warna tulisan (Font color)
      display.setCursor(0, 30);                   // mengatur posisi cursor text (x,y) 
      display.print("ADC : ");                    // menampilkan pesan "ADC : "
      display.setCursor(30, 30);                  // mengatur posisi cursor text (x,y) 
      display.print(ADCvalue);                    // menampilkan ADC value dari pin ADC tertentu, sesuai pin
      display.display();                          // untuk mendapatkan efek dari code OLED
      delay(100);

}
