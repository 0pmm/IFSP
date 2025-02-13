#include <stdio.h>
#include <string.h>

int main() {
    char frase[101], biggest[101] = {0}, palavra_atual[101] = {0};
    int i, j, k, aux = 0;
    int contador, qtd[100];

    scanf("%100[^\n]", frase);
    getchar();

    while (strcmp(frase, "0") != 0) {
        contador = 0;
        j = 0;
        k = 0;

        for (i = 0; frase[i] != '\0'; i++) {
            if (frase[i] == ' ') {
                palavra_atual[k] = '\0';
                if (contador > aux) {
                    aux = contador;
                    strcpy(biggest, palavra_atual);
                }
                qtd[j] = contador;
                contador = 0;
                k = 0;
                j++;
            } else {
                contador++;
                palavra_atual[k] = frase[i];
                k++;
            }
        }

        palavra_atual[k] = '\0';
        if (contador > aux) {
            aux = contador;
            strcpy(biggest, palavra_atual);
        }
        qtd[j] = contador;
        j++;

        i = 0;
        while (i + 1 != j) {
            printf("%d-", qtd[i]);
            i++;
        }
        printf("%d\n", qtd[i]);

        scanf("%100[^\n]", frase);
        getchar();
    }
    printf("Maior palavra: %s\n", biggest);

    return 0;
}
