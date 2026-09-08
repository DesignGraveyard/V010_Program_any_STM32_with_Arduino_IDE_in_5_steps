//Serial monitor demo STM32BuePill STM32F103C8 
//Official STMicroelectronics boards package, more information: https://github.com/stm32duino/Arduino_Core_STM32
//Boards JSON Link: https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json
//Connections: 2 wires: 
// Wire #1: Bluepill A9(Tx) to FTDI Rx; 
// Wire #2: Bluepill GND    to FTDI GND 
// Always set FTDI to 3.3Volt! Power: from the ST-Link programmer

void setup() {
  Serial.begin(9600);
  delay(1000);  // Wait for the serial to initiate
}

void loop() {

  Serial.println("Hello this is your STM32 board on serial");
  delay(1000);
}
