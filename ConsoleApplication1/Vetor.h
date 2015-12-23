#ifndef _VETOR_H
#define _VETOR_H
	
#include "math.h"

class Vetor {
	double x, y, z;

public:
	Vetor();
	Vetor(double, double, double);

	double getX(){
		return x;
	}
	double getY(){
		return y;
	}
	double getZ(){
		return z;
	}

	double magnitude() {
		return sqrt((x*x) + (y*y) + (z*z));
	}

	Vetor normalizar() {
		double magnitude = sqrt((x*x) + (y*y) + (z*z));
		return Vetor(x / magnitude, y / magnitude, z / magnitude);
	}

	Vetor negativo(){
		return Vetor(-x, -y, -z);
	}

	double produtoEscalar(Vetor v){
		return x*v.getX() + y*v.getY() + z*v.getZ();
	}

	Vetor produtoVetorial(Vetor v){
		return Vetor(
			y*v.getZ() - z*v.getY(),
			z*v.getX() - x*v.getZ(),
			x*v.getY() - y*v.getX()
			);
	}

	Vetor adicao(Vetor v){
		return Vetor(x + v.getX(), y + v.getY(), z + v.getZ());
	}

	Vetor mult(double v){
		return Vetor (x*v, y*v, z*v);
	}
};

Vetor::Vetor(){
	x = 0;
	y = 0;
	z = 0;
}

Vetor::Vetor(double i, double j, double k){
	x = i;
	y = j;
	z = k;
}

#endif