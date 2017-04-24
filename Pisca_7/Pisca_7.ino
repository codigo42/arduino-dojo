/*
  Pisca 7
  Exibe o dígito 7 piscando no display.
*/

int ledA=8;
int ledB=9;
int ledC=10;

// a função setup executa uma vez quando a placa é ligada ou resetada
void setup() {
  // configura os leds para saída (OUTPUT)
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
}

// a função loop executa repetidamente, para sempre
void loop() {  
  digitalWrite(ledA, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  digitalWrite(ledB, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  digitalWrite(ledC, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
  digitalWrite(ledA, LOW);    // apaga o led (LOW é baixa: 0V)
  digitalWrite(ledB, LOW);    // apaga o led (LOW é baixa: 0V)
  digitalWrite(ledC, LOW);    // apaga o led (LOW é baixa: 0V)
  delay(analogRead(A0));      // espera o tempo dado pelo potenciômetro
}
                
