// Labirinto.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "ratao.h"
#include "mapinha.h"
using namespace std;
int main() {
	mapa labirinto;
	ratao rato;
	procurarQueijo(labirinto, rato.posX, rato.posY);
	return 0
}