#include <iostream>
#include <wiringPi.h>

#include "pwm.hpp"

int main() {
  wiringPiSetup();

  PWM pwm(0);
	while(1) {

	for(float i = 0.0f; i <= 0.82f; i += 0.005f) 
		pwm.pulse(500.0f, 16.0f, i);
	for(float i = 0.82f; i >= 0.0f; i -= 0.005f) 
		pwm.pulse(500.0f, 16.0f, i);
}


return 0;
  while(true) {
    for(float i = 0.0f; i <= 1.0f; i+= 0.005f)
      pwm.pulse(500.0f, 50.0f, i);

    for(float i = 1.0f; i >= 0.0f; i-= 0.005f)
      pwm.pulse(500.0f, 50.0f, i);
  }
  return 0;
}
