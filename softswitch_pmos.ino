const int powerLatch = 13;
const int INTpin = 12;

void IRAM_ATTR ISR() {
  pinMode(INTpin, OUTPUT);
  digitalWrite(INTpin, HIGH);
  digitalWrite(powerLatch, LOW);
}

void setup() {
  
  pinMode(powerLatch, OUTPUT);
  pinMode(INTpin, INPUT);  
  
  digitalWrite(powerLatch, HIGH);
  
  delay(5000);
  attachInterrupt(INTpin, ISR, FALLING);
}

void loop() {}
