#ifnded BasicIO_h
#define BasicIO_h

#include "Arduino.h"

class pushButton{
	public:
		pushButton(int pin);
		bool state();
	private:
		uint8_t _pin;
}
		
class Potentiometer{
	public:
		Potentiometer(int analogPin);
		uint32_t value(int value_range);
		uint32_t smooth_value(int value_range, int steps);
	private:
		uint8_t _pin;
}

class LED{
	public:
		LED(int pin);
		void on();
		void off();
		void blink(int period);
	private:
		uint8_t _pin;
}

#endif