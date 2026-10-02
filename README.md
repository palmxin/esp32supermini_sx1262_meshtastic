Meshtastic ESP32-S3 SuperMini + SX1262 自制板
[README.md](README.md)
Meshtastic ESP32-S3 SuperMini + SX1262 自制板
基于 ESP32-S3 SuperMini (FH4R2, 4MB Flash + 2MB QSPI PSRAM) + SX1262 LoRa 模块，支持 OLED 屏幕与按键，适配 Meshtastic 固件。
硬件信息
- MCU：ESP32-S3 SuperMini FH4R2 (4MB Flash / 2MB QSPI PSRAM)
- LoRa：SX1262
- Display：I2C OLED
- Keys：物理按键
引脚定义
SX1262 LoRa
SX1262
ESP32-S3 GPIO
NSS
13
MOSI
12
DIO1
11
NRST
1
SCK
8
MISO
10
BUSY
9
OLED I2C
OLED
ESP32-S3 GPIO
SCK
7
SDA
6
按键
Key
ESP32-S3 GPIO
KEY1
2
KEY2
3
KEY3
4
KEY4
5
PlatformIO 编译环境
- PlatformIO Core：6.1.19
- 平台：pioarduino /arduino-esp32
- 内存配置：board_build.arduino.memory_type = qio_qspi
⚠️ 不要使用 qio_opi，本模组为 QSPI 2MB PSRAM，OPI 会直接 PSRAM 初始化 panic 崩溃。
Variant 配置要点
1. variant.h 必须定义：#define BOARD_HAS_PSRAM
2. 在 pins_arduino.h 中按照上表映射 SX1262、OLED、按键 GPIO
3. 编译前务必执行完整清理，避免旧参数残留：
pio run -e diy_s3_sx1262 -t clean
rm -rf .pio
pio run -e diy_s3_sx1262
编译 & 烧录
# 完整编译
pio run -e diy_s3_sx1262

# 编译并直接上传
pio run -e diy_s3_sx1262 -t upload

固件特性
- Meshtastic 官方固件分支适配
- SX1262 LoRa 通信
- I2C OLED 屏幕显示节点信息
- 2MB PSRAM 启用，设备页面可查看 PSRAM 容量
License
MIT

