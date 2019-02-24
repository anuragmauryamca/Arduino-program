#include<dht.h>
dht DHT;
#define DHT11_PIN 5
void setup() {
    // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Welcome to temo");
  


}

void loop() {
  // put your main code here, to run repeatedly:
  int chk=DHT.read11(DHT11_PIN);
  Serial.println("HUmudity");
  Serial.println(DHT.humidity, 1);
  Serial.println("Temperature");
  Serial.println(DHT.temperature,1);
delay(2000);
}
