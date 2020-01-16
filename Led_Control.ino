
String data;
int led1=11;
int led2=12;
int led3=13;
void setup() {
  pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600);

  Serial.begin(9600);
}

void loop() {
 while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    data += c; 
 }
 delay(100);
if(data=="Silecek Ac")
digitalWrite(led1,1);
if(data=="Silecek Kapa")
digitalWrite(led1,0);
if(data=="Lamba Ac")
digitalWrite(led2,1);
if(data=="Lamba Kapa")
digitalWrite(led2,0);
if(data=="Korna Ac")
digitalWrite(led3,1);
if(data=="Korna Kapa")
digitalWrite(led3,0);
delay(100);
Serial.print(data);
data="";
 }
 
