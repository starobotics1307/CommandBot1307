#ifndef Loop_H
#define Loop_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Loop: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:

	float magleft, magright, xleft, xright, yleft, yright;
	float left = xleft * yleft;
	float right = xright * yright;
	float origin = left + right;
    float magforce = magleft + magright;
    float axis = origin/4;
    float mag = magforce/2;



     Loop();
	void InitDefaultCommand();
	void WriteToFile();
};

#endif
