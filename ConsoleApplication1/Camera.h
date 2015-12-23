#ifndef _CAMERA_H
#define _CAMERA_H

#include "math.h"
#include "Vetor.h"

class Camera {
	Vetor posicao, direcao, alvoHorizontal, alvoVertical;

public:
	Camera();
	Camera(Vetor, Vetor);
	Camera(Vetor, Vetor,Vetor,Vetor);

	Vetor getPosicao(){ return posicao; }
	Vetor getDirecao(){ return direcao; }
	Vetor getHorizontal(){ return alvoHorizontal; }
	Vetor getVertical(){ return alvoVertical; }
};

Camera::Camera(){
	posicao = Vetor(0, 0, 0);
	direcao = Vetor(0, 0, 1);
	alvoHorizontal = Vetor(0, 0, 0);
	alvoVertical = Vetor(0, 0, 0);
}

Camera::Camera(Vetor p, Vetor d){
	posicao = p;
	direcao = d;
}

Camera::Camera(Vetor p, Vetor d,Vetor h,Vetor v){
	posicao = p;
	direcao = d;
	alvoHorizontal = h;
	alvoVertical = v;
}


#endif