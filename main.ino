#include "HC_SR04.h"



#define U_SENSOR_CM 0
#define U_SENSOR_IN 1

U_SENSOR sensor_ultrasonico;
uint8_t veces = 0;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.println("-------------------");
  Serial.print("Distancia medida = ");
  Serial.print(sensor_ultrasonico.read(4, 5));
  Serial.println(" cm");
  Serial.println();
  delay(500);
}
