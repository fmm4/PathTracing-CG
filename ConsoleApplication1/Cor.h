#ifndef _COR_H
#define _COR_H

#include "math.h"

class Cor {
	double r, g, b;


public:
	Cor();
	Cor(double, double, double);

	double getRed(){
		return r;
	}
	double getGreen(){
		return g;
	}
	double getBlue(){
		return b;
	}

	double setR(double red){
		r = red;
	}
	double setG(double green){
		g = green;
	}
	double setB(double blue){
		b = blue;
	}

};

Cor::Cor(){
	r = 0.5;
	g = 0.5;
	b = 0.5;
}

Cor::Cor(double red, double green, double blue){
	r = red;
	g = green;
	b = blue;
}

#endif