/*
  Jinga anima (dojo com Arduino)
  Acende e apaga os leds ao redor do display em sequência.
*/

int ledA=8;
int ledB=9;
int ledC=10;
int ledD=11;
int ledE=12;
int ledF=13;

// a função setup executa uma vez quando a placa é ligada ou resetada
void setup() {
  // configura os leds para saída (OUTPUT)
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);  
}

// a função loop executa repetidamente, para sempre
void loop() {  
  digitalWrite(ledA, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledA, LOW);    // apaga o led (LOW é baixa: 0V)
  
  digitalWrite(ledB, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledB, LOW);    // apaga o led (LOW é baixa: 0V)
  
  digitalWrite(ledC, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledC, LOW);    // apaga o led (LOW é baixa: 0V)
  
  digitalWrite(ledD, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledD, LOW);    // apaga o led (LOW é baixa: 0V)

  digitalWrite(ledE, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledE, LOW);    // apaga o led (LOW é baixa: 0V)

  digitalWrite(ledF, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledF, LOW);    // apaga o led (LOW é baixa: 0V)
}
                
