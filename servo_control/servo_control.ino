#include<Servo.h>

Servo m1;
int angle=40;

void setup(){
m1.attach(6);
delay(1);
m1.write(0);
Serial.begin(9600);
}

void loop(){
int v = 0 ;
int pv = 10 ;

 while (Serial.available()) {
       delay(20);  
         while(Serial.available() >0) {
       char c = Serial.read();  //gets one byte from serial buffer
       v += 10*v + c-'0';
         }
       m1.write(v);
       Serial.write(v);
     }
   
    
}
