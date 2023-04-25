#include <Adafruit_GFX.h> 
#include <Adafruit_ST7789.h> 
#include <SPI.h>

// hw spi pins are
// sclk = 13
// miso = 12 (not used in this example)
// mosi = 11
//
#define TFT_CS 10 
#define TFT_RST 9 
#define TFT_DC 8 

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.init(240, 240, SPI_MODE3); 
  tft.setRotation(2);
}

void loop() {
  tft.fillScreen(0x0000); 
  tft.setCursor(20, 50); 
  tft.setTextColor(ST77XX_GREEN); 
  tft.setTextSize(3); 
  tft.print("EAZYTRONIC");
  delay(2000);
  }
