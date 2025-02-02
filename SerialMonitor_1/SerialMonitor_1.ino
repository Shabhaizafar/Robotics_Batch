void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.available();
  // Serial.print("Royal");
  // Serial.println("Royal");
  // delay(1000);
  // Serial.println(Serial.available());
  if(Serial.available()>0){
    char inp = Serial.read();
    if(inp=='1'){
        digitalWrite(13,HIGH);
    }else if(inp=='0'){
        digitalWrite(13,LOW);
    }
  }
  delay(1000);
}


/*
Order : 
1.  LED on LED off.
2.  3 -LED 
    LED ON >> Order No.


    1 > 1st led 
    2 > 2nd led   1-3 off
    3 > 3rd led
    4 > 1-2 led
    5 > 2-3 led
    6 > 1-3 led
    7 >  1-2-3 led
    8 > off
*/ 

/*
analog: (pin)
  analogWrite(); //output
  analogRead();  //input

digital: (pin)
  digitalWrite();  //output
  digitalRead();   //output

serial Monitor :  (display)
step : 1
  start : setup >> Serial.begin(baund);

step : 2
  available   >>> Serial.available();

setp : 3 
    data print : 
      Serial.print();    // same line
      Serial.println();  // newline

      Serial.print("Zafar");
      ZafarZafarZafar
      Serial.println("Zafar");
      Zafar
      Zafar
      Zafar
step : 4 
    Serial.read()
*/ 