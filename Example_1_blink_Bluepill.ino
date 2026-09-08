
//Blink STM32BuePill STM32F103C8 (64k)  (C6=32k, CB=128k, will also work)
//Official STMicroelectronics boards package, more information: https://github.com/stm32duino
//Boards JSON Link: https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PC13, OUTPUT);

}

void loop() {
  digitalWrite(PC13, HIGH);  // LED OFF (LED is connected from 3V3 to GPIO PC13)
  delay(500);     

  digitalWrite(PC13, LOW);   // LED ON (LED is connected from 3V3 to GPIO PC13)
  delay(100);                   
}
