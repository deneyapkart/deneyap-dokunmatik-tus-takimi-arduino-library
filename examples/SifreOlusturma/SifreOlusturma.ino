/*
 *   Şifre oluşturma örneği,
 *   
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Önceden belirlenmiş 4 haneli şifreyi kullanıcı doğru bir şekilde tuş takımından basınca 
 *   seri terminalde "şifre doğru" yazısını yazdırmaktadır.
 *   Önceden belirlenen şifre 0000'dan farklı bir şifre olmalıdır.
 *   
 *   Basma süresine bağlı olarak birden fazla okuma yapabilir.
 *   
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Dokunmatik Tuş Takımı için oluşturulmuştur
 *      ------>  www.....com  <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-dokunmatik-tus-takimi-arduino-library  <------ 
 *
*/
#include <Deneyap_DokunmatikTusTakimi.h>        // Deneyap_DokunmatikTusTakimi kütüphanesi eklenmesi

int password[] = {1, 2, 3, 4};                  // Belirlenen şifre
int inputvalue[4];                              // Girilen şifre
int ArrayIndex = 0;                             // Sayaç

Keypad Keypad;                                  // Keypad için class tanımlanması

void setup() {
  Serial.begin(115200);                         // Seri haberleşme başlatılması
  Keypad.begin(0x0E);                           // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
}

void loop() {
  int keyword = Keypad.KeypadRead();            // Tuş takımına basılan değeri okuması
  if (keyword != 0xFF) {                        // Tuş takımına basıldığında
    inputvalue[ArrayIndex] = keyword;           // Birinci dizi sayısına tuş takımı değerini girilmesi
    ArrayIndex++;                               // Sayacı artır
    switch (ArrayIndex) {
    case 1:                                     // Birinci değer girilince ekrana * yazdırılması
      Serial.printf("*", inputvalue[0]);
      break;
    case 2:                                     // İkinci değer girilince ekrana * yazdırılması
      Serial.printf("*", inputvalue[1]);
      break;
    case 3:                                     // Üçüncü değer girilince ekrana * yazdırılması
      Serial.printf("*", inputvalue[2]);
      break;
    case 4:                                     // Dördüncü değer girilince ekrana * yazdırılması
      Serial.printf("*", inputvalue[3]);
      ArrayIndex = 0;
      Serial.println("tekrar");
      break;
    }
  }

  if (password[0] == inputvalue[0] && password[1] == inputvalue[1] && password[2] == inputvalue[2] && password[3] == inputvalue[3]) { // şifre doğru ise
    Serial.println("şifre doğru");
    delay(500);
    inputvalue[0] = 0;                          // Girilen şifre dizisinin sıfırlanması
    inputvalue[1] = 0;
    inputvalue[2] = 0;
    inputvalue[3] = 0;
  }
  delay(100);
}
