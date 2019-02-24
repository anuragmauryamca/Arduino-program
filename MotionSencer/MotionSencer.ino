
int ledpin=13;
int inputpin=2;
int pirState=LOW;
int val=0;



void setup(){
pinMode(ledpin,OUTPUT);
pinMode(inputpin,INPUT); 
Serial.begin(9600);
 
}
void loop(){
  val=digitalRead(inputpin);
  if(val==HIGH){
    digitalWrite(ledpin,HIGH);
    if(pirState==LOW){
      Serial.println("Motion Detected");
      pirState=HIGH;
    }
  }

else{
  digitalWrite(ledpin,LOW);
  if(pirState==HIGH){
    Serial.println("Moltion ended");
    pirState =LOW;
    if(pirState==LOW){
      Serial.println("Motion Detected");
      pirState=HIGH;
      
      }
    }else{
      digitalWrite(ledpin,LOW);
      if(pirState==HIGH){
        Serial.println("Motion Ended");
        pirState=LOW;
        }
      }
  }
  
}
