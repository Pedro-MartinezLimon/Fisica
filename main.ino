#include "HC_SR04.h"

#define U_SENSOR_CM 0
#define U_SENSOR_IN 1

U_SENSOR sensor_ultrasonico;
uint8_t veces = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop() 
{
  Serial.println("-------------------");
  Serial.print("Distancia medida (cm) = ");
  Serial.print(sensor_ultrasonico.read(4, 5));
  
  //Verificación : Se puede modificar la distancia minima
  if(sensor_ultrasonico.read(4,5) <= 15.0)
    digitalWrite(6, HIGH);
  else
    digitalWrite(6, LOW);

  
  delay(500);
}
