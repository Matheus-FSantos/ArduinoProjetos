#define botao 3
#define led1 4
#define led2 5

boolean saidaLed1 = LOW;
boolean saidaLed2 = HIGH;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int entrada;
  entrada = digitalRead(botao);

  digitalWrite(led1, saidaLed1);
  digitalWrite(led2, saidaLed2);
  if(entrada == 1){
    saidaLed1 = !saidaLed1;
    saidaLed2 = !saidaLed2;    
    
    digitalWrite(led1, saidaLed1);
    digitalWrite(led2, saidaLed2);
    delay(500);
  }
  delay(10);
}
