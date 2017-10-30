#include<Servo.h>

Servo myservo;
int pos=180;
int inputPin1=6;
int inputPin2=5;
int inputPin3=4;
int outPin1=9;
int outPin2=10;


void setup() {
  // put your setup code here, to run once:
myservo.attach(8);
myservo.write(0);
pinMode(inputPin1,INPUT);
pinMode(inputPin2,INPUT);
pinMode(inputPin3,INPUT);
pinMode(outPin1,OUTPUT);
pinMode(outPin2,OUTPUT);
digitalWrite(outPin1,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int irState1=digitalRead(inputPin1); //Serial.println(irState1);
int irState2=digitalRead(inputPin2);
int irState3=digitalRead(inputPin3);

if(irState1==HIGH){
  Serial.println("ir1");
}
if(irState2==HIGH){
Serial.println("ir2");
}
if(irState3==HIGH)
{
  Serial.println("ir3");
}



if (irState1==HIGH || irState2==HIGH || irState3==HIGH){
  Serial.println("cool:");
  digitalWrite(outPin1,HIGH);
  
    myservo.write(90);              // tell servo to go to position in variable 'pos'
    delay(6000);                       // waits 6000ms for the servo to reach the position
  
  //myservo.detach();
}


else {
digitalWrite(outPin1,LOW);

 // goes from 180 degrees to 0 degrees
    myservo.write(180);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  
  //myservo.detach();
}



//delay(100);
}
