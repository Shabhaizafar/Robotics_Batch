int previousState = 1;
int currentState = 1;
int counter = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(7,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  previousState = currentState; 
  currentState = digitalRead(7); 
  if(previousState==1 && currentState==0){
      counter++;
  }
  // else if(previousState==0 && currentState==1){
  //     counter++;
  // }
  if(counter%2!=0){
    digitalWrite(13,HIGH);
    Serial.print("Previous : ");
    Serial.print(previousState);
    Serial.print(",");
    Serial.print("Current : ");
    Serial.println(currentState);
  }
  else if(counter%2==0){
    digitalWrite(13,LOW);
    Serial.print("Previous : ");
    Serial.print(previousState);
    Serial.print(",");
    Serial.print("Current : ");
    Serial.println(currentState);
  }
}
/*

counter 1  1st led ON   2nd,3rd OFF
counter 2  2nd led ON   1st,3rd OFF
counter 3  3rd led ON   2nd,1st OFF
counter 4  3rd led OFF   2nd,1st ON
counter 5  1st led OFF   2nd,3rd ON
counter 6  2nd led OFF   1st,3rd ON
counter 7  ALL ON
counter 8 ALL OFF   : counter = 0
*/ 





