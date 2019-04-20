/*CESmartCamp.h - For CESmartCamp only*/

#ifndef CESmartCamp_h
#define CESmartCamp_h

#include "Arduino.h"

class UltraSonic{
private:
	int trig;
	int echo;
	
public:
	UltraSonic(int t,int e);
	long length_cm();
	long length_inch();
};

#endif
