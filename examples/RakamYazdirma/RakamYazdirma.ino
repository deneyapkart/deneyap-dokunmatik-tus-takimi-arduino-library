/*
 *   Rakam Yazdırma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   ....
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap TASLAK için oluşturulmuştur
 *      ------>  www.....com  <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-dokunmatik-tus-takimi-arduino-library  <------ 
 *
*/

#include <Deneyap_DokunmatikTusTakimi.h>

Keypad TusTakimi;

void setup(){ 
  Serial.begin(115200);
  TusTakimi.begin(0x0E);
}

void loop() {
  int keypadDeger = TusTakimi.KeypadRead();
  if(keypadDeger != 0xFF) 
    Serial.println(keypadDeger);

  delay(100);
}
