/*
    Declaración de clase : 23.10.25
    
    Código tomado y modificado de [https://github.com/offcircuit/SHCSR04.git].
*/

#ifndef U_SENSORH
#define U_SENSORH

class U_SENSOR {
  public:
    explicit U_SENSOR() {};

    double read(uint8_t trigger, uint8_t echo, bool inches = 0) {

      pinMode(trigger, OUTPUT);
      pinMode(echo, INPUT);
      
      digitalWrite(trigger, HIGH);
      pulseIn(trigger, LOW, 10);
      digitalWrite(trigger, LOW);

      return double(pulseIn(echo, HIGH)) / (58 + (inches * 90));
    }
};

#endif