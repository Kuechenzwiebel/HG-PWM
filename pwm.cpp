#include "pwm.hpp"

using namespace std;

PWM::PWM(unsigned short pin):
pin(pin) {
  pinMode(pin, OUTPUT);
}

PWM::~PWM() {
  digitalWrite(pin, LOW);
}

void PWM::pulse(float freq, float time, float duty) {
  chrono::steady_clock::time_point endPoint = chrono::steady_clock::now() + chrono::milliseconds(int(round(time)));

  unsigned int delayHigh = round((1000000.0f / freq) * duty) - 76;
  unsigned int delayLow = round((1000000.0f / freq) * (1.0f - duty)) - 76;

  while(endPoint > chrono::steady_clock::now()) {
    digitalWrite(pin, HIGH);
    this_thread::sleep_for(chrono::microseconds(delayHigh));
    digitalWrite(pin, LOW);
    this_thread::sleep_for(chrono::microseconds(delayLow));
  }
}

void PWM::pulses(float freq, unsigned long pulses, float duty) {
  unsigned int delayHigh = round((1000000.0f / freq) * duty) - 76;
  unsigned int delayLow = round((1000000.0f / freq) * (1.0f - duty)) - 76;

  for(unsigned long i = 0; i < pulses; i++) {
    digitalWrite(pin, HIGH);
    this_thread::sleep_for(chrono::microseconds(delayHigh));
    digitalWrite(pin, LOW);
    this_thread::sleep_for(chrono::microseconds(delayLow));
  }
}
