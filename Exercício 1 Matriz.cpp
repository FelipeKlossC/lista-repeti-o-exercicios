#include <stdio.h>

int main () {
	int matriz [3][5], soma = 0;
	printf("Digite os elementos da matriz 4x4: \n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 5; j++) {
				printf("Elemento [%d][%d]", i, j);
				scanf("%d", &matriz[i][j]);
				soma= matriz[0][4] + matriz [1][4] + matriz [2][4];
			}
		}
		printf("A soma dos elementos da diagonal principal eh: %d", soma);
}
