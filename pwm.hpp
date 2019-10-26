#ifndef pwm_hpp
#define pwm_hpp

#include <wiringPi.h>
#include <chrono>
#include <thread>
#include <math.h>

class PWM {
public:
  PWM(unsigned short pin);

  ~PWM();

  void pulse(float freq, float time, float duty = 0.5f);
  void pulses(float freq, unsigned long pulses, float duty = 0.5f);

private:
  unsigned short pin;
};

#endif
