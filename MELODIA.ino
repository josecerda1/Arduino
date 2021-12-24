#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_G3 196

#define BUZZER_PASIVO 8
#define PULSADOR 2

  int melodia[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
  };

  int duraciones[] = {
  4, 8, 8, 4, 4, 4, 4, 4
  };

  int led = 7;
  
void setup() {
  pinMode(PULSADOR, INPUT_PULLUP);
  pinMode(BUZZER_PASIVO, OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  if(digitalRead(PULSADOR) == LOW){
    for (int i=0; i<8; i++){
      int duracion = 1000/duraciones[i];
      tone(BUZZER_PASIVO, melodia[i], duracion);
      int pausa = duracion * 1.30;
      digitalWrite(led, HIGH);
      delay(10);
      delay(pausa);
      digitalWrite(led, LOW);
      delay(10);
      noTone(BUZZER_PASIVO);
      }
    }
}
