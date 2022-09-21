int botao = 1;
int led = 2;

void setup() {
  pinMode(botao, INPUT);
  Serial.begin(9600);//liga o monitor serial
}

void loop() {
  botao = digitalRead(botao); //retorna 0 ou 1 caso seja apertado ou nao
  Serial.print(botao); //printa o serial no monitor
  if(botao == 1){
    
  }
}
