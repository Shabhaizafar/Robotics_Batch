void setup() {
    pinMode(A1,OUTPUT);   // blue
    pinMode(A3,OUTPUT);   // green
    pinMode(A5,OUTPUT);   // red
}
void loop() {

  // red Light : ON
  analogWrite(A5,255);
  analogWrite(A1,0);
  analogWrite(A3,0);
  delay(1000);

  // green Light : ON
  analogWrite(A5,0);
  analogWrite(A1,0);
  analogWrite(A3,255);
  delay(1000);

  // Blue 
  analogWrite(A5,0);
  analogWrite(A1,255);
  analogWrite(A3,0);
  delay(1000);

  // Yellow Light : ON
  analogWrite(A5,255);
  analogWrite(A1,0);
  analogWrite(A3,255);
  delay(5000);
}


/*
RGB 
R : RED
G : GREEN
B : BLUE
*/
/*
OUTPUT : 
  digital :
      digitalWrite();
  analog  :
      analogWrite();


range : 
    0  -  255
  LOW    HIGH
*/ 

/*
  Task - 1 Same Program 

  Task - 2 Trafic Signal 

  Task - 3 7 Colors 
*/