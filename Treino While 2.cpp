#include <stdio.h>

int main () {
	int anos = 0;
	float alt_quico = 1.50, alt_chaves = 1.35; //altura do quico tem que ser menor que a do chaves
		while (alt_quico > alt_chaves) {
			alt_quico = alt_quico + 0.03;
			alt_chaves = alt_chaves + 0.05;
			anos++;
		}
		printf("Foram necessarios %d anos para Chaves ficar maior que Quico", anos);
		return 0;
}