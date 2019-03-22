/*=======================    SKETCH    ==========================
====================    LAMPU LALU LINTAS   ====================*/


// konfigurasi pin lampu lalu lintas 1
#define  red1        2
#define   yellow1 1
#define   green1  0

// konfigurasi pin lampu lalu lintas 2
#define  red2        13
#define   yellow2 12
#define   green2   11


void setup() {
  // Men-set mode pin lampu lalu lintas
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}


void loop() {
  for(int x = 0; x<5; x++){
    digitalWrite(red1, HIGH);   // menyalakan lampu merah pada lampu lalu lintas 1
    digitalWrite(green2, HIGH); // menyalakan lampu hijau pada lampu lalu lintas 2
    delay(200);
  }
  off(); // mereset-mematikan semua lampu lalu lintas

  for(int y = 0; y<5; y++){
    digitalWrite(red1, HIGH);   // menyalakan lampu merah pada lampu lalu lintas 1
    digitalWrite(yellow2, HIGH); // menyalakan lampu kuning pada lampu lalu lintas 2
    delay(200);
  }
  off();  // mereset-mematikan semua lampu lalu lintas

  for(int y = 0; y<5; y++){                       
    digitalWrite(red2, HIGH);   // menyalakan lampu merah pada lampu lalu lintas 2
    digitalWrite(green1, HIGH); // menyalakan lampu hijau pada lampu lalu lintas 1
    delay(200);
  }
  off();  // mereset-mematikan semua lampu lalu lintas

  for(int y = 0; y<5; y++){
    digitalWrite(red2, HIGH);   // menyalakan lampu merah pada lampu lalu lintas 2
    digitalWrite(yellow1, HIGH);// menyalakan lampu kuning pada lampu lalu lintas 1
    delay(200);
  }
  off();  // mereset-mematikan semua lampu lalu lintas
}

void off() {         // fungsi untuk mematikan lampu merah
    digitalWrite(red1, LOW);
    digitalWrite(yellow1, LOW);
    digitalWrite(green1, LOW);
    digitalWrite(red2, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(green2, LOW);
}
