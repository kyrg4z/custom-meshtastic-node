// Custom Meshtastic node v1.0 - HT-CT62 (ESP32-C3 + SX1262)
// UNTESTED: written from the schematic, not yet run on hardware.

#define BUTTON_PIN 9 // SW2 (boot)

// SSD1306 0.91" OLED (U3)
#define I2C_SDA 1
#define I2C_SCL 2

// u-blox SAM-M10Q (U2)
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN 20 // MCU RX  <- GNSS TX
#define GPS_TX_PIN 21 // MCU TX  -> GNSS RX

// Battery sense: R14/R15 100k/100k divider on GPIO0
#define BATTERY_PIN 0
#define ADC_CHANNEL ADC_CHANNEL_0 // GPIO0 = ADC1_CH0
#define ADC_MULTIPLIER 2.0

// SX1262 inside the HT-CT62 (same as stock heltec_esp32c3 variant)
#define USE_SX1262
#define LORA_SCK 10
#define LORA_MISO 6
#define LORA_MOSI 7
#define LORA_CS 8
#define LORA_DIO0 RADIOLIB_NC
#define LORA_RESET 5
#define LORA_DIO1 3
#define LORA_DIO2 RADIOLIB_NC
#define LORA_BUSY 4
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
