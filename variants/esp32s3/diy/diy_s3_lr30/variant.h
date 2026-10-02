#pragma once
// 基础板配置

#define BOARD_HAS_PSRAM

#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN
// 射频模块 SX1262 DX-LR30【管脚已修正】
#define USE_SX1262
#define LORA_MISO 10
#define LORA_SCK 8
#define LORA_MOSI 12
#define LORA_CS 13
#define LORA_RESET 1
#define LORA_DIO1 11
#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY 9
#define SX126X_RESET LORA_RESET
// 核心：模块DIO2短接TXEN，由SX1262硬件自动控制射频开关
#define SX126X_DIO2_AS_RF_SWITCH
// 不用单独控制TXEN/RXEN
#undef SX126X_RXEN
#undef SX126X_TXEN
#endif

// OLED SSD1306屏幕
#define USE_SSD1306
#define SCREEN_TYPE SCREEN_SSD1306
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define I2C_SDA 6
#define I2C_SCL 7
#define SCREEN_I2C_ADDR 0x3C

// 4个按键，内部上拉
#define BUTTON_PIN      2
#define BUTTON_PIN_1 2
#define BUTTON_PIN_2 3
#define BUTTON_PIN_3 4
#define BUTTON_PIN_4 5
#define BUTTON_NEED_PULLUP
// 不使用NeoPixel、SD卡
#undef HAS_NEOPIXEL
#undef HAS_SDCARD
