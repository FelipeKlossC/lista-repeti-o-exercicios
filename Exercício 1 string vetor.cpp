#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char invertida[101];
    int i, j;

    printf("Digite uma string (sem espa�os): ");
    scanf("%100s", str);  // L� at� 100 caracteres, sem espa�os

    int tamanho = strlen(str);

    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        invertida[j] = str[i];
    }
    invertida[j] = '\0';

    printf("String invertida: %s\n", invertida);

    return 0;
}

