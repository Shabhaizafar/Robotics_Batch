void setup() {
      pinMode(13,OUTPUT); // red
      pinMode(12,OUTPUT); // yellow
      pinMode(11,OUTPUT); // green
}

void loop() {
    // Red LED ON 
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    delay(5000);

    // Yellow LED ON
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(2000);

    // Green LED ON
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    delay(3000);
}
