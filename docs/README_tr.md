# Deneyap Dokunmatik Tuş Takımı Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Dokunmatik Tuş Takımı için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M37**, **mpv1.0**
- `MCU` MSP430G2352
- `Ağırlık`
- `Modul Boyutları` 
- `I2C Adres` 0x0E, 0x4C, 0x71, 0x72

| Adres |  | 
| :--- | :---     |
| 0x0E | varsayılan adres |
| 0x4C | ADR1 kısa devre yapıldığındaki adres |
| 0x71 | ADR2 kısa devre yapıldığındaki adres |
| 0x72 | ADR1 ve ADR2 kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
Deneyap Dokunmatik Tuş Takımı

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap Dokunmatik Tuş Takımı
Bu Arduino kütüphanesi Deneyap Dokunmatik Tuş Takımının I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Dokunmatik Tuş Takımı ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| Dokunmatik Tuş Takımı | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
|SWIM | Debug | bağlantı yok |
|RES  | Debug | bağlantı yok |
| NC          | bağlantı yok |   |

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-dokunmatik-tus-takimi-arduino-library/blob/master/LICENSE) dosyasını inceleyin.
