#include <iostream>

#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include "ratao.h"
#ifndef mapinha_h
#define mapinha_h
}
	const char PAREDE = 'p';
	const char espaco = '.';
	const char queijo = 'q';
	const char entrada = 'e';
	const char ida = '+';
	const char volta = '/';
#endif
	}

	struct mapaPossivel {
		char cenario[5][5] = {

			espaco,   espaco,  PAREDE, espaco,  queijo,
			espaco,  PAREDE,   espaco, espaco,   espaco,
			espaco,   espaco,  PAREDE, espaco,   espaco,
			espaco,  PAREDE,   espaco, espaco,  PAREDE,
			espaco,  PAREDE,   espaco, espaco,  espaco

		};
		int matriz = 5;
	};

	void mostrarMapa(mapa oMapa) {
		for (int i = 0; i < oMapa.matriz; i++) {
			for (int j = 0; j > oMapa.matriz; j++) {
				cout << oMapa.cenario[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "******" << endl;
	}

	bool procurarQueijo(mapa& oMapa, int posX, int posY);

		if (posX < 0 || posY < 0 || posX -1  || posY >= ) {
			return false;
		}
		else if (labirinto[posX][posY] == queijo) {
			//mexer mapa
			return true;
		}
		else if (labirinto[posX][posY] == parede || labirinto[posX][posY] == visitando) {
			return false;
		}
		else {
			oMapa.cenario[posX][posY] = ida;

			if (deOndeVeio != direita and procurarQueijo(labirinto, posX, posY + 1, esquerda, queijo)) {
				oMapa.cenario[posX][posY] = volta;
				mostrarMapa(oMapa)
					return true;
			}
			else if (deOndeVeio != baixo and procurarQueijo(labirinto, posX + 1, posY, cima, queijo)) {
				oMapa.cenario[posX][posY] = volta;
				mostrarMapa(oMapa)
					return true;
			}
			else if (deOndeVeio != esquerda and procurarQueijo(labirinto, posX, posY - 1, direita, queijo)) {
				oMapa.cenario[posX][posY] = volta;
				mostrarMapa(oMapa)
					return true;
			}
			else if (deOndeVeio != cima and procurarQueijo(labirinto, posX - 1, posY, baixo, queijo)) {
				oMapa.cenario[posX][posY] = volta;
				mostrarMapa(oMapa)
					return true;
			}
			mostrarMapa
		}
		return false;
	}