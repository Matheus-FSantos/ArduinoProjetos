int botao = 3;
int led = 4;


void setup() {
  pinMode(3, INPUT); //passo pino 3 como entrada
  pinMode(4, OUTPUT); //passo pino 4 como saida
  Serial.begin(9600);
}

void loop() {
  botao = digitalRead(3); //botao recebe o resultado da leitura digital (0 ou 1)

  if(botao == 1){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
