int pin=13;
void setup() {
  Serial.begin(9600);
  pinMode(pin,OUTPUT);

}

void loop() {
  while(Serial.available()<=0){
    
  }
String val=Serial.readString();
Serial.println(val);
if(val="mcu"){
  digitalWrite(pin,HIGH);
  Serial.println("LED is on");
  delay(400);

  digitalWrite(pin,LOW);
  Serial.println("LED is off");
  delay(400);
}
}
