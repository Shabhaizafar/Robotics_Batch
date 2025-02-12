void setup(){
	pinMode(7,INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop(){
	int value = digitalRead(7);//1
  Serial.println(value);

  if(value==1){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
}

// Serial Monitor

// Light : 0 
// No : 1