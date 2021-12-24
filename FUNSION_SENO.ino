
int toneVal;
float sinVal;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for(int x=0; x<180; x++){
    //convertir grados a radianes para luego obtener el valor
    sinVal = (sin(x*(3.1412/180)));
    // generar frecuancia a partir del valor sin
    toneVal = 2000+(int(sinVal*1000));
    tone(13,toneVal);
    delay(2000);
    tone(13,0);
    delay(4000);
    }
}
