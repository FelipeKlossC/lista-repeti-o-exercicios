#include <stdio.h>

int main () {
	int numero = 5;
		printf("Numeros multiplos de 5 no intervalo de 1 a 100: ");
			do {
				printf("\n%d \n", numero);
				numero += 5;	
			}
			while (numero <= 100);
			return 0;
		}