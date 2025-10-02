#include <Stdio.h>

int main () {
	int soma = 0, contador = 1;
		do {
			printf("%d \n", contador);
			soma += contador;
			contador++;
		} while (contador <= 100);
		printf("\n Soma dos 100 primeiros numeros inteiros: %d", soma);
		return 0;
}