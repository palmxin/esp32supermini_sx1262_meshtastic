#ifndef Pins_Arduino_h
#define Pins_Arduino_h
#include <stdint.h>
#define USB_VID 0x303a
#define USB_PID 0x1001
// Default Wire(I2C) mapped to OLED screen
static const uint8_t SDA = 6;
static const uint8_t SCL = 7;
// Default SPI mapped to SX1262 LoRa radio【已修正】
static const uint8_t MISO = 10;
static const uint8_t SCK  = 8;
static const uint8_t MOSI = 12;
static const uint8_t SS   = 13;
#endif /* Pins_Arduino_h */
