#include <Arduino.h>
#include <Wire.h>
int A=2,B=3,C=4;//declare  variables
int X=8;

void setup()//define pins as input or output
{
	   pinMode(2, INPUT);
	   pinMode(3, INPUT);
	   pinMode(4, INPUT);
     
	   pinMode(8, OUTPUT);
}
void loop()
{
	   A=digitalRead(2);//INPUT
	   B=digitalRead(3);
	   C=digitalRead(4);
      
           X=((B)&&(A||C)&&(!A||!C));//BOOLEAN EXPRESSION
	   digitalWrite(8,X);//DISPLAY OUTPUT USING LED
}
