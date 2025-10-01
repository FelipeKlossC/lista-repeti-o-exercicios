#include <stdio.h>

int main () {
	int contador = 10;
		printf("Contagem regressiva para o lancamento do foguete!: ");
			do {
				printf("\n%d \n", contador);
				contador--;
			}
			while (contador >= 0);
			printf("FOGO!");
}