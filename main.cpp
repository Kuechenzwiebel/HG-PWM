#include <iostream>
#include <wiringPi.h>

#include "pwm.hpp"

int main() {
  wiringPiSetup();

  PWM pwm(0);

  while(true) {
	pwm.pulse(70.0f, 100.0f);
/*
    for(float i = 0.0f; i <= 1.0f; i+= 0.005f)
      pwm.pulse(500.0f, 50.0f, i);

    for(float i = 1.0f; i >= 0.0f; i-= 0.005f)
      pwm.pulse(500.0f, 50.0f, i);*/
  }

  pwm.pulse(500.0f, 2500.0f);

  return 0;
}
