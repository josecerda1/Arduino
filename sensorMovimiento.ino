int TRIG = 10;
int ECO = 9;
int LED = 2;
int BUZZ = 12;

int DURACION;
int DISTANCIA;


void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION = pulseIn(ECO, HIGH);
  DISTANCIA = DURACION * 0.034 / 2;
  Serial.println(DISTANCIA);
  delay(50);
  
  if(DISTANCIA <= 20 && DISTANCIA >=0){
    digitalWrite(LED,HIGH);
    digitalWrite(BUZZ, HIGH);
    
    delay(DISTANCIA * 5);
    
    digitalWrite(LED,LOW);
    digitalWrite(BUZZ, LOW);
    
    }
}
