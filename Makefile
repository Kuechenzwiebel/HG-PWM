CXX = g++
CXXLINKERFLAGS = -lwiringPi

.PHONY : all

all:
	$(CXX) pwm.cpp -c -o libHG-PWM.a $(CXXLINKERFLAGS)

install:
	cp libHG-PWM.a /usr/local/lib/libHG-PWM.a
	mkdir /usr/include/HG-PWM
	cp pwm.hpp /usr/include/HG-PWM/pwm.hpp

clean:
	rm -f  /usr/local/lib/libHG-PWM.a
	rm -fr /usr/local/include/HG-PWM
