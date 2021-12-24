#define PULSADOR 2
#define BUZZER_ACTIVO 8
int led=7;

void setup() {
  pinMode(PULSADOR, INPUT_PULLUP);
  pinMode(BUZZER_ACTIVO, OUTPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  if(digitalRead(PULSADOR) == LOW){
    for(int i=0 ; i<5 ; i++){
      digitalWrite(BUZZER_ACTIVO, HIGH);
      delay(100);
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(BUZZER_ACTIVO, LOW);
      delay(100);
      digitalWrite(led, LOW);;
      delay(100);
      }
    }
}
