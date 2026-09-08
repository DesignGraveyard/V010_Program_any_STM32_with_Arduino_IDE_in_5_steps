
//Keyboard demo STM32BuePill STM32F103C8 with USB HID support
//Official STMicroelectronics boards package, more information: https://github.com/stm32duino
//Boards JSON Link: https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json

#include "Keyboard.h"

void setup() {
  Keyboard.begin(); // Initialize keyboard:
  delay(1000);      // Wait for the keyboard to initiate
}

void loop() {

  Keyboard.print("Hello this is your STM32 board typing");
  Keyboard.write(KEY_RETURN);//press enter
  delay(1000);
}
