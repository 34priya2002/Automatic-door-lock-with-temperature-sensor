#include <Servo.h>
Servo myservo;  
int val;
int tempPin = 1;
int pos = 0; 
  int irPin=2;  
 int count=0; 
 const int ledPin =  13; 
 boolean state = true; 
 void setup()  
 {  
  Serial.begin(9600);  
   myservo.attach(9);  
  pinMode(irPin, INPUT);  
  pinMode(ledPin, OUTPUT);
  pinMode(12, OUTPUT);  
 }  
 void loop()  
 { 
 
  
  val = analogRead(tempPin);
  float mv = ( val/1024.0)*5000;
  float cel = mv/10;
  float farh = (cel*9)/5 + 32;
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(200);
  if (cel >= 31.74){
     Serial.print(" door open");
     digitalWrite(ledPin,HIGH);
     delay(4000);
     digitalWrite(ledPin,LOW);
   
     
  {
  for (pos = 0; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);            
    delay(15);                       
  }}}
  delay(1000);
  if (!digitalRead(irPin) && state){  
    count++;  
    state = false;  
    Serial.print("Count: ");  
    Serial.println(count);  
    if (count>=2)count=0;
    { 
    Serial.print("tries to escape ");
     digitalWrite(12, HIGH); 
  delay(500);            
digitalWrite(12, LOW);  
  delay(200);
   digitalWrite(12, HIGH); 
  delay(700);}
  digitalWrite(12, LOW);  
  delay(200);
    delay(100);  
     }  
  if (digitalRead(irPin))  
  {  
    state = true;  
    delay(100);  
  }   
  
  
  }
