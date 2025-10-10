#include <stdio.h>

int main () {
	int matriz [4][4], mult = 0;
	printf("Digite os elementos da matriz 4x4: \n");
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("Elemento [%d][%d]", i, j);
				scanf("%d", &matriz[i][j]);
				mult = matriz[0][0] * matriz[1][1] * matriz[2][2] * matriz[3][3];
			}
		}
		printf("A multiplicacao dos elementos da diagonal principal eh: %d", mult);
}
