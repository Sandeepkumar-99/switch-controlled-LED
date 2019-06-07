void setup() {
  // put your setup code here, to run once:
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int state=digitalRead(D3);
  digitalWrite(D1,state); 
  digitalWrite(D2,state);

}
