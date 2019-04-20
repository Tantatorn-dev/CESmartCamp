/*CESmartCamp.c - For CESmartCamp only*/

#include "CESmartCamp.h"

UltraSonic::UltraSonic(int t,int e){
	trig = t;
	echo = e;
	pinMode(trig, OUTPUT);
	pinMode(echo, INPUT);
	
}

long UltraSonic::length_cm(){
	digitalWrite(trig, LOW);
	delayMicroseconds(2);
	digitalWrite(trig, HIGH);
	delayMicroseconds(5);
	digitalWrite(trig, LOW);
	return pulseIn(echo, HIGH) / 29 / 2;
}

long UltraSonic::length_inch(){
	digitalWrite(trig, LOW);
	delayMicroseconds(2);
	digitalWrite(trig, HIGH);
	delayMicroseconds(5);
	digitalWrite(trig, LOW);
	return pulseIn(echo, HIGH) / 74 / 2;
}
