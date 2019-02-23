// Panggil Library
    #include <Adafruit_GFX.h>
    #include <Adafruit_SSD1306.h>
    #include <Wire.h>

// Pendefinisian parameter
    #define oled 0x3c             // i2c comm address for OLED
    #define OLED_RESET 4
    
// Inisiasi display OLED
    Adafruit_SSD1306 display(OLED_RESET);

void setup(){
  // Memulai fungsi OLED
      display.begin(SSD1306_SWITCHCAPVCC, oled);

  // Menghapus OLED pertama kali, jika tidak dihapus akan ada simbol Adafruit.
      display.clearDisplay();  
      
  // Untuk mendapatkan efek display
      display.display();  

  // Code untuk menampilkan pesan text “Hallo semesta”
      menampilkanPESAN();
}

void loop() {
  // put your main code here, to run repeatedly :

}

Void menampilkanPESAN(){
      display.setTextSize(1);                     // menentukan ukuran font (Font size)
      display.setTextColor(WHITE);                // menentukan warna tulisan (Font color)
      display.setCursor(0, 0);                    // mengatur posisi cursor text (x,y) 
      display.print("PDAM dan IUWASH");           // menampilkan pesan dengan perintah ‘print’
      display.display();                          // untuk mendapatkan efek dari code OLED

}
