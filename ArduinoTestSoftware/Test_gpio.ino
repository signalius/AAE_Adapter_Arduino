
#define PWR_EN  8
#define CH1_OE  2
#define CH1_INA 3
#define CH1_INB 4

void setup() {
  pinMode(CH1_OE, OUTPUT);
  pinMode(CH1_INA, OUTPUT); 
  pinMode(PWR_EN, OUTPUT); 
  digitalWrite(PWR_EN, HIGH);  
  digitalWrite(CH1_OE,  HIGH);  
}

void loop() {
  delay(500);
  for(int i=0; i<16;i++) {
    digitalWrite(CH1_INA, HIGH);  
    delayMicroseconds(8);
    digitalWrite(CH1_INA, LOW);  
    delayMicroseconds(8);
  }
}
