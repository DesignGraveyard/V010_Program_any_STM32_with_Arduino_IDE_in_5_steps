//Blink STM32G071KBU (K8U=64k, KBU=128k)
//Official STMicroelectronics boards package, more information: https://github.com/stm32duino
//Boards JSON Link: https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PA2, OUTPUT);

}

void loop() {
  digitalWrite(PA2, HIGH);  // LED ON
  delay(100);     

  digitalWrite(PA2, LOW);   // LED OFF
  delay(500);                   
}
