const int powerLatch = 13;const int INTpin = 27;
const int LED = 14;

void IRAM_ATTR ISR() {  

  digitalWrite(powerLatch, HIGH);
}

void setup() {  

  //Nach Start alle Pins definieren  
  pinMode(powerLatch, OUTPUT);   
  pinMode(LED, OUTPUT);  
  pinMode(INTpin, INPUT);     //T1 sperren, externe LED an  
  digitalWrite(powerLatch, LOW);  
  digitalWrite(LED, HIGH);    

  //Interrupt konfigurieren    
  delay(5000);  
  attachInterrupt(INTpin, ISR, FALLING);
}

void loop(){  //Platz für eigene Funktionen}  
