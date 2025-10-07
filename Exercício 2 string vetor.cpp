#include <stdio.h>

int main() {
    char str[201];  // string com at� 200 caracteres + '\0'
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int j = 0;

    printf("Digite uma string (at� 200 caracteres): ");
    // L� a string (sem usar string.h)
    while (j < 200) {
        str[j] = getchar();
        if (str[j] == '\n') {
            break; // parar quando o usu�rio apertar Enter
        }

        // Contar vogais min�sculas e mai�sculas
        if (str[j] == 'a' || str[j] == 'A') a++;
        else if (str[j] == 'e' || str[j] == 'E') e++;
        else if (str[j] == 'i' || str[j] == 'I') i++;
        else if (str[j] == 'o' || str[j] == 'O') o++;
        else if (str[j] == 'u' || str[j] == 'U') u++;

        j++;
    }

    // Mostrar resultados
    printf("Ocorrencias de vogais:\n");
    printf("A: %d\n", a);
    printf("E: %d\n", e);
    printf("I: %d\n", i);
    printf("O: %d\n", o);
    printf("U: %d\n", u);

    return 0;
}

