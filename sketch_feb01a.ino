void setup() {
  Serial.begin(9600);
  
  //outputs
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  

}

void loop() {
  int sensorValue = analogRead(A0);

  if (sensorValue > 100){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }

  if (sensorValue > 200){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }

  if (sensorValue > 300){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }

  if (sensorValue > 400){
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(5, LOW);
  }
  
  if (sensorValue > 500){
    digitalWrite(6, HIGH);
  }
  else{
    digitalWrite(6, LOW);
  }

  if (sensorValue > 600){
    digitalWrite(7, HIGH);
  }
  else{
    digitalWrite(7, LOW);
  }

  if (sensorValue > 700){
    digitalWrite(8, HIGH);
  }
  else{
    digitalWrite(8, LOW);
  }

  if (sensorValue > 800){
    digitalWrite(9, HIGH);
  }
  else{
    digitalWrite(9, LOW);
  }

  if (sensorValue > 900){
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(10, LOW);
  }

  if (sensorValue > 1000){
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, LOW);
  }
  
  delay(1);
}
