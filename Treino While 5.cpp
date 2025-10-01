#include <stdio.h>

int main() {
    int numero = 1;

    printf("Numeros impares de 1 a 20: ");
    while (numero <= 20) {
        if (numero % 2 != 0) {
            printf("\n%d \n", numero);  // imprime o número
        }
        numero++;  //incrementa o número
    }

    printf("\n");
    return 0;
}
