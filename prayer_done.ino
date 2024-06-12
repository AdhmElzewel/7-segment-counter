#define trig 8
#define echo 9
byte seg[]={B00111111,B00000101,B01011011,B01001111,B01100101};
int distance=0,t=0;
int ultra(){
 digitalWrite(trig,LOW);
  delayMicroseconds(5);
   digitalWrite(trig,HIGH);
  delayMicroseconds(10);
   digitalWrite(trig,LOW);   
     t=pulseIn(echo,HIGH);
     distance=t/57;
     return distance;}
void setup() {
     DDRD=B11111111;
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT) ;
 PORTD=seg[1];
}
void loop() {  
   m:int i= ultra();
   if(i>20){goto m;}
   delay(2000);
 while (i<=20)
{PORTD=seg[1]; 
 i= ultra();} 
 n: i= ultra();
   if(i>20){goto n;}
while(i<20)
    delay(2000);
{PORTD=seg[1]; 
 i= ultra();} 
  X:i= ultra(); 
if(i>20){goto X;}
  while(i<20)
 delay(2000);
{PORTD=seg[2];
i= ultra();}  
c:i= ultra(); 
if(i>20){goto c;}
  while(i<20)
  delay(2000);
{PORTD=seg[2];
i= ultra();}
  y: i= ultra();
if(i>20){goto y;}
  while(i<20)
   delay(2000);
{PORTD=seg[3];
 i= ultra();}
 v: i= ultra();
if(i>20){goto v;}
  while(i<20)
   delay(2000);
{PORTD=seg[3];
 i= ultra();}
  z: i= ultra();
if(i>20){goto z;}
while(i<20)
 delay(2000);
{PORTD=seg[4];
 i= ultra();}
 b: i= ultra();
if(i>20){goto b;}
while(i<20)
delay(2000);
{PORTD=seg[4];
 i= ultra();}
}
