/*
  Jinga anima com `for` (dojo com Arduino)
  Acende e apaga os leds ao redor do display em sequência.
  
*/

// a função setup executa uma vez quando a placa é ligada ou resetada
void setup() {
  // configura os leds para saída (OUTPUT)
  for (int led=8; led<=13; led++) {
    pinMode(led, OUTPUT);
  }
}

// a função loop executa repetidamente, para sempre
void loop() {  
  for (int led=8; led<=13; led++) {
    digitalWrite(led, HIGH);   // acende o led (HIGH é tensão "alta": 5V)
    delay(analogRead(A0));     // espera o tempo dado pelo potenciômetro
    digitalWrite(led, LOW);    // apaga o led (LOW é baixa: 0V)
  }
}                
