#include <stdio.h>

int main () {
	int numero, somaPositivos = 0, somaNegativos = 0;
		printf("Digite uma sequencia de numeros positivos (0 encerra a entrada): \n");
			do {
				scanf("%d", &numero);
					if (numero > 0) {
						somaPositivos += numero;
					}
					else if (numero < 0) {
						somaNegativos += numero;
					}
					}
					while (numero != 0);
					printf("Soma dos numeros positivos: %d\n", somaPositivos);
					printf("Soma dos numeros negativos: %d", somaNegativos);
				return 0;
			}
