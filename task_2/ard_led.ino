const int led[6]={13,12,11,10,9,8};
int sw1=0;
int sw2=0;

void setup() {
  for(int i=0; i<6; i++) {
    pinMode(led[i],OUTPUT);
  }
  pinMode(2,INPUT);
  pinMode(3,INPUT);
}

void loop() {
  //flashing
  for(int i=0; i<6; i++){
    digitalWrite(led[i],HIGH);
    delay(10);
  }  
  delay(200);
  for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
  delay(200);
  //shift right
  for(int i=0; i<6; i++) {
    for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(100);
  }
   //shift left
   for(int i=4; i>=0; i--) {
    for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(100);
  }
  for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
  delay(200);  
  //2 LEDs converging
  for(int i=0; i<=2; i++) {
    for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    digitalWrite(led[5-i],HIGH);
    delay(100);
  }
  for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
  delay(200);
    //2 LEDs diverging
    for(int i=2; i>=0; i--) {
    for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    digitalWrite(led[5-i],HIGH);
    delay(100);
  }
  for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }  
  delay(200);
  // Ping Pong effect
  sw1=digitalRead(2); 
  sw2=digitalRead(3);
  if(sw1==1) {
    for(int i=0; i<6; i++) {
    for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(100);
  } 
  }else if(sw2==1) {
    for(int i=5; i>=0; i--) {
    for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    digitalWrite(led[i],HIGH);
    delay(100);
  } }
  for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
  delay(200);
  //Snake effect
  for(int i=0; i<6; i++){
    digitalWrite(led[i],HIGH);
    delay(100);
  }
  for(int j=0; j<6; j++) {
      digitalWrite(led[j],LOW);
    }
    delay(200);
  }


