int led = 3; //Defino o pino 3, com  o nome de led
int tempo = 500;


void setup() {
  pinMode(led, OUTPUT); //Define o led (pino 3) como saida
}

void loop() { 
  digitalWrite(led, HIGH); //Liga a saida led e por ser saida 0 ou 1, é uma saida digital
  delay(tempo); //Pausa a o led em 0,8 segundo
  digitalWrite(led, LOW); //Desliga a saida
  delay(tempo);
}
