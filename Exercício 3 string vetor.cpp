#include <stdio.h>

int main() {
    char str[201];
    char letra;
    int posicao = -1;
    int i = 0;

    printf("Digite uma string (at� 200 caracteres): ");
    fgets(str, 201, stdin);

    printf("Digite o caractere a ser procurado: ");
    scanf(" %c", &letra);

    while (str[i] != '\0') {
        if (str[i] == letra) {
            posicao = i;
        }
        i++;
    }

    if (posicao != -1) {
        printf("�ltima ocorr�ncia do caractere '%c' est� na posi��o: %d\n", letra, posicao + 1);
    } else {
        printf("O caractere '%c' n�o aparece na string.\n", letra);
    }

    return 0;
}

