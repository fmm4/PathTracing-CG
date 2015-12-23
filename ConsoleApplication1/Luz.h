#ifndef _LUZ_H
#define _LUZ_H

#include "math.h"
#include "Vetor.h"

class Luz {
	Vetor posicao;
	Cor cor;

public:
	Luz();
	Luz(Vetor, Cor);

	Vetor getPosicao(){ return posicao; }
	Cor getCor(){ return cor; }
};

Luz::Luz(){
	posicao = Vetor(0, 0, 0);
	cor = Cor(1,1,1);
}

Luz::Luz(Vetor p, Cor c){
	posicao = p;
	cor = c;
}

#endif