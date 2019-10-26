# HG-PWM
A C++ PWM and servo library for Raspberry Pi; based on WiringPi.

# How to install
On a UNIX like system you can run "make" and "sudo make install" to build and install the libary.
You can now include the libary using #include <HG-PWM/pwm.hpp>. To compile the program add the flags "-L/usr/local/lib -I/usr/local/include -lHG-PWM"
To remove the libary use "sudo make clean"
