#ifndef _FEIXO_H
#define _FEIXO_H

#include "math.h"
#include "Vetor.h"

class Feixo {
	Vetor origem, direcao;

public:
	Feixo();
	Feixo(Vetor, Vetor);

	Vetor getOrigem(){ return origem; }
	Vetor getDirecao(){ return direcao; }
};

Feixo::Feixo(){
	origem = Vetor(0, 0, 0);
	direcao = Vetor(1, 0, 0);
}

Feixo::Feixo(Vetor o, Vetor d){
	origem = o;
	direcao = d;
}

#endif