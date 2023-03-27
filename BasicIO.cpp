#include "Arduino.h"
#include "BasicIO.h"

pushButton::pushButton(int pin){
	_pin = pin;
	pinMode(_pin, OUTPUT);
}

bool pushButton::state(){
	delay(10);
	return digitalRead(_pin);
}

Potentiometer::Potentiometer(int analogPin){
	if(pin >= A0 && pin <= A5){
		_pin = pin;
	}
}

uint32_t value(int value_range){
	return analogRead(_pin);
}

uint32_t smooth_value(int value_range){
	uint32_t avg = 0;
	for(uint8_t i = 0; i < 20; i++){
		avg += analogRead(_pin);
	}
	avg = avg/20;
	return avg;
}

LED::LED(int pin){
	_pin = pin;
}

void LED::on(){
	digitalWrite(_pin, HIGH);
}

void LED::off(){
	digitalWrite(_pin, LOW);
}

void LED::blink(int period){
	digitalWrite(_pin, HIGH);
	delay(period/2);
	digitalWrite(_pin, LOW);
	delay(period/2);
}