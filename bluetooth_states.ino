
#define ledPin 13
int state = 0;


void setup() {
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
  Serial.println("Would you like me to turn on the lights?");
  Serial.println("Press '1' for yes");
  Serial.println("Press '0' for no");
  Serial.println("------------------");
  

}

void loop() {
  if(Serial.available() > 0){
  state = Serial.read();
  }
  if (state == '0') {
    digitalWrite(ledPin,LOW);
    Serial.println("Lights Off");
    state = 0;
  }
  else if (state == '1'){
    digitalWrite(ledPin,HIGH);
    Serial.println("Lights On");
    
  }
  state = 0;
  
    
  

}
