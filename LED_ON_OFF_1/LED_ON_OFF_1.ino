//setup  : function name
// void : return type(function)   : null/empty/khali return
void setup() {
  // put your setup code here, to run once:
      pinMode(13,OUTPUT);   // digital Pin
  //    pinMode(A0,OUTPUT); // analog pin
}

// loop : function name
// void : return type(function) : null/empty/khali return
void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(13,HIGH);
    delay(2000);
    //milisecond 
    // 1s = 1000ms
    digitalWrite(13,LOW);
    delay(2000);
}

/*
comment's :
there are Two Types.
// 1. single Line
2. Multiple Line. 
*/

// cases : 
/*
UPPERCASE :  SHABHAIZAFAR 
          : pre-defined value

lowercase :  shabhaizafar
          : pre-defined function

snake_case : shabhai_zafar

camelCase :  shabhaiZafar
          : Methods 
*/


/*
in C language : 
Input Function : 
    scanf();

Output Function : 
    printf();

*/
/*
in Arduino  : 
Input  : 
  1. digital
      digitalRead();
  2. analog
      analogRead();

Output : 
  1. digital
      digitalWrite();
  2. analog
      analogWrite();

*/








// 1. LED ON-OFF
// task-1 Blink LED

// 2. 2-LED ON-OFF.

