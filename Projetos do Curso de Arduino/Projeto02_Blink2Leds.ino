int led = 3;
int led2 = 6;


int tempo = 500;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
  delay(tempo);
}
