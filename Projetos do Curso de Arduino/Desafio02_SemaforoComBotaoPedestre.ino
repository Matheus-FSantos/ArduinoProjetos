//BOTAO
#define botao 3

//SEMAFORO
#define ledVerde 4
#define ledAmarelo 5
#define ledVermelho 6

//PEDRESTE
#define ledVerdePedestre 7
#define ledVermelhoPedestre 8 


void setup(){
  pinMode(botao, INPUT);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
  pinMode(ledVermelhoPedestre, OUTPUT);
  pinMode(ledVerdePedestre, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  boolean entrada;
  entrada = digitalRead(botao);

  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelhoPedestre, HIGH);
  digitalWrite(ledVerdePedestre, LOW);
  
  if(entrada == true){
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, LOW);
      digitalWrite(ledVermelhoPedestre, HIGH);
      digitalWrite(ledVerdePedestre, LOW);
      delay(1000);
  
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, LOW);
      
      digitalWrite(ledVermelhoPedestre, LOW);
      digitalWrite(ledVerdePedestre, HIGH);
      delay(4000);

      digitalWrite(ledVerdePedestre, LOW);
      digitalWrite(ledVermelhoPedestre, HIGH);
      delay(400);
      digitalWrite(ledVermelhoPedestre, LOW);
      delay(400);
      digitalWrite(ledVermelhoPedestre, HIGH);
      delay(400);
      digitalWrite(ledVermelhoPedestre, LOW);
      delay(400);
  }
}
