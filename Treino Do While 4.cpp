#include <stdio.h>

int main() {
    int a, b, resto;  // a e b são os números digitados; resto guarda o resto da divisão

    // Pede para o usuário digitar dois números inteiros
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    // Algoritmo de Euclides para calcular o MDC usando do...while
    do {
        // Calcula o resto da divisão de 'a' por 'b'
        resto = a % b;

        // Atualiza 'a' para o valor de 'b'
        a = b;

        // Atualiza 'b' para o resto da divisão
        b = resto;

        // O laço continua enquanto 'b' for diferente de 0
        // Quando 'b' for 0, 'a' terá o MDC
    } while (b != 0);

    // Imprime o resultado final do MDC
    printf("O MDC e: %d\n", a);

    return 0;
}
