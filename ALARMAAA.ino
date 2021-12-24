
#define PULSADOR 13

//SU
int TRIG = 12;
int ECO = 7;
//PINES => 5v -> vcc && Gnd = Gnd

int LED = 2;

int BUZZ = 8;

int VBUT = 4;


//

int DURACION;
int DISTANCIA;


void setup() {
  
  pinMode(VBUT, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(PULSADOR, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  
  Serial.begin(9600);
}


void loop() {
  
  do{
    
    digitalWrite(TRIG, HIGH);
    delay(1);
    digitalWrite(TRIG, LOW);
    delay(1);
  
    DURACION = pulseIn(ECO, HIGH);
    DISTANCIA = DURACION * 0.034 / 2;
  
    Serial.println(DISTANCIA);

    delay(1);
    
    }while(DISTANCIA > 10);
    
    do{
    digitalWrite(TRIG, LOW);
     
    digitalWrite(BUZZ,HIGH);
    
    delay(100);º
    
    digitalWrite(LED,HIGH);
    
    digitalWrite(VBUT, HIGH);
    
    }while(digitalRead(PULSADOR)==LOW);
    
    digitalWrite(LED,LOW);
    digitalWrite(BUZZ,LOW);

    
}
