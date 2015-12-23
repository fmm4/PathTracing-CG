// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CImg.h"
#include "Vetor.h"
#include "Feixo.h"
#include "Camera.h"
#include "Cor.h"
#include "Luz.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Pixel{
	double r;
	double g;
	double b;
};

int _tmain(int argc, _TCHAR* argv[])
{
	int SCREEN_HEIGHT = 640;
	int SCREEN_WIDTH = 320;

	//-----------------------------------------------------------//
	//Ler o ambiente dado
	
	string linha;
	ifstream sdl("cornellroom.sdl");
	if (sdl.is_open())
	{
		while (sdl >> linha) {
			if (linha == "eye"){
				sdl >> linha;
				double x = stod(linha);
				sdl >> linha;
				double y = stod(linha);
				sdl >> linha;
				double z = stod(linha);
			}
		}
		sdl.close();
	}

	//-----------------------------------------------------------//

	

	int TAMANHO_TOTAL = SCREEN_HEIGHT*SCREEN_WIDTH;
	Pixel *IMAGEM = new Pixel[TAMANHO_TOTAL];

	Vetor X(1, 0, 0);
	Vetor Y(0, 1, 0);
	Vetor Z(0, 0, 1);

	//Camera
	Vetor posicaoCamera(0, 0, 1);
	Vetor alvo(0, 0, 0);
	Vetor diferenca(posicaoCamera.getX() - alvo.getX(), posicaoCamera.getY() - alvo.getY(), posicaoCamera.getZ() - alvo.getY());
	Vetor direcao = diferenca.negativo().normalizar();
	Vetor alvoHorizontal = Y.produtoVetorial(direcao).normalizar();
	Vetor alvoVertical = alvoHorizontal.produtoVetorial(direcao);

	Camera OBSERVADOR(posicaoCamera, direcao, alvoHorizontal, alvoVertical);

	//Luz
	Cor branca(1, 1, 1);
	Vetor posicaoLuz(1, 1, 1);
	Luz	luz(posicaoLuz, branca);

	int pixelPos;

	for (int y = 0; y < SCREEN_HEIGHT; y++){
		for (int x = 0; x < SCREEN_WIDTH; x++){
			pixelPos = y*SCREEN_HEIGHT + x;

		}
	}


	c
	return 0;
}

