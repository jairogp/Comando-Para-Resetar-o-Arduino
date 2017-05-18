void setup() {
  Serial.begin(9600);
  Serial.print("teste");
}

void loop() {
  Serial.print("0");
  delay(2000);
  Serial.print("1");
  delay(2000);
  Serial.print("2");
  delay(2000);
  Serial.print("3");
  delay(2000);
  Serial.print("4");
  delay(2000);
  Serial.print("5");
  delay(2000);
  Serial.print("6");
  delay(2000);
  Serial.print("7");
  delay(2000);
  Serial.print("8");
  delay(2000);
  asm volatile ("jmp 0"); //Comando para resetar o Arduino
  //ESP.reset();              // Comando para resetar o NodeMCU
  Serial.print("9");
  delay(2000);
  Serial.print("10");
  delay(2000);
  Serial.print("0");
  delay(2000);
  Serial.print("0");
  delay(2000);
  Serial.print("0");
  delay(2000);

}
