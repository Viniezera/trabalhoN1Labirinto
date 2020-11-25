// Labirinto.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "structrato.h"
using namespace std;
int main()
{
	bool andar(char labirinto[5][5]), int x, int y, char deOndeVeio, bool& queijo) {
	labirinto[x][y] = 'r';
	if (queijo == true) {
		return true;
	}
	else if (labirinto[x][y] == 'Q') {
		return true;
	}
	else if (labirinto[x][y] == 'e') {
		return false;
	}
	else if (labirinto[x][y] == 'p') {
		return false;
	}
	else if (labirinto[x > 5 || x < 5]) {
		return false;
	}
	else if (labirinto[y > 5 || y < 5]) {
		return false;
	}
	}
}

