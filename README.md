# HG-PWM
A C++ PWM and servo library for Raspberry Pi; Based on WiringPi.


# How to install
On a UNIX like system you can run `make` and `sudo make install` to build and install the library.

You can now include the library using `#include <HG-PWM/your_component>`. To compile the program add the flags `-L/usr/local/lib -I/usr/local/include -lHG-PWM`

To remove the library use `sudo make clean`


# How to use

## PWM Signals
The `PWM` class can generate PWM Pulses of any frequency, lenght and duty cycle. It is declared in the `pwm.hpp`file.

The constructor requires the `WiringPi pin number`. On this GPIO the signals will be put out.


Using the `pulse` function the pulses can be generated. There are two variants of the function:

`pulse(float frequency, float time, float duty)` 

The frequency can be set to any value. It has been tested to work reliably on up to 5kHz.

The time specifies how long the pulses will be put out. This is given in milliseconds.

Duty can be set to any value from `0.0f` to `1.0f`. It specifies how much of the pulses are high. If no value is set, the duty cycle is set to 0.5f corresponding to 50%.




`pulse(float frequency, unsigned long pulses, float duty)` 


This function is identical to the last, but the number of pulses can be specified instead of the time.
