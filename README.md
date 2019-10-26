# HG-PWM
A C++ PWM and servo library for Raspberry Pi; Based on WiringPi.


# How to install
On a UNIX like system you can run `make` and `sudo make install` to build and install the library.

You can now include the library using `#include <HG-PWM/your_component>`.

To compile the program add the flags `-L/usr/local/lib -I/usr/local/include -lHG-PWM`

To remove the library use `sudo make clean`
