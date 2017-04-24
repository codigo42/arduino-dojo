/*
  Blink (Dojo)
  Pisca um led
*/

int led=13;

// a função setup executa uma vez quando a placa é ligada ou resetada
void setup() {
  // configura o led para saída (OUTPUT)
  pinMode(led, OUTPUT);
}

// a função loop executa repetidamente, para sempre
void loop() {  
  digitalWrite(led, HIGH);  // acende o led (HIGH é tensão "alta": 5V)
  delay(1000);              // espera um segundo
  digitalWrite(led, LOW);   // apaga o led (LOW é baixa: 0V)
  delay(1000);              // espera um segundo
}                
