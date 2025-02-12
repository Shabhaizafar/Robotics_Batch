void setup() {
  // put your setup code here, to run once:
    pinMode(13,OUTPUT);//trig
    pinMode(6,INPUT);//echo
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(5,LOW);
  // delayMicroseconds(10);
  // digitalWrite(5,HIGH);
  // delayMicroseconds(10);
  // digitalWrite(5,LOW);
  // int value = pulseIn(6,HIGH);
  // int distance = value/29/2;
  // // int distance = value/58;
  // // int distance = value*0.034;
  // Serial.print("Distance : ");
  // Serial.print(distance);
  // Serial.println(" cm.");
  digitalWrite(13, HIGH);
}

//digitalWrite
//digitalRead

//analogWrite
//analogRead

//Serial.begin()
//Serial.Available()
//Serial.print()
//Serial.println()

//pulseIn

/*
3 LED

distance  > 100   green ON 
20 > distance  <= 100   Yellow ON 

distance < 20    = Red
*/