int led = 3;
int led2 = 4;
int led3 = 5;


int tempoDeEspera = 500;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
  digitalWrite(led, HIGH);
  delay(tempoDeEspera);
  digitalWrite(led, LOW);
  digitalWrite(led2,HIGH);
  delay(tempoDeEspera);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(tempoDeEspera);
  digitalWrite(led3, LOW);
}
