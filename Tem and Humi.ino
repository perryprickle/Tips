//Arduino sketch for DHT11/DHT22 interfacing
#include <Adafruit_Sensor.h>
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("DHT11 test!");
dht.begin();  



}

void loop() {
  // put your main code here, to run repeatedly:
delay(2000);
float h = dht.readHumidity();
float t = dht.readTemperature();
Serial.print("Humidity: \t" );
Serial.print(h);
Serial.print(" % \n");
delay(500);
Serial.print("Temperature: \t");
Serial.print(t);
Serial.print(" *C \n");
}

