#include <Stdio.h>

int main () {
	int contador = 1, numero = 1;
		printf("Digite um numero positivo: ");
		scanf("%d", &numero);
		while (contador <= 10) {
			printf("%d x %d = %d \n", numero, contador, numero * contador);
			contador++;
		}
		return 0;
}