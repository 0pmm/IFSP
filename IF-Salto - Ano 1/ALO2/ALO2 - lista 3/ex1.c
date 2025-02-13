#include <stdio.h>

int soma_digitos(const char *str) {
    int soma = 0;
    int i = 0;

    while (str[i] != '\0') {
        soma += (str[i] - '0');
        i++;
    }

    return soma;
}

int main() {
    char str[51];
    int resultado;
    scanf("%[^\n]", str);

    resultado = soma_digitos(str);

    printf("%d\n", resultado);

    return 0;
}
