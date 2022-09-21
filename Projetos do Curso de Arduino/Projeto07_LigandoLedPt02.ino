int botao = 3;
int led = 4;

boolean saida = LOW;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int entrada;
  entrada = digitalRead(botao);

  if(entrada == 1){
    saida = !saida;
    digitalWrite(led, saida);
    pause(500);
  }
  delay(10);
}
