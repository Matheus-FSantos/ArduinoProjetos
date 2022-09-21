int potenciomentro;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  //A = Informa que é Analogico e o 1 informe o pino
  int potenciometro = analogRead(A1); //Retorna valores de 1 até 1023
  
  //Posta no minitor o valor do potenciometro
  Serial.println("Valor do potenciometro: " + potenciometro);
  delay(10);
}
