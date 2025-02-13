#include <stdio.h>
#include <string.h>

int main () {
    char x[50] = {"0123456789ABCDEF"}, y[50] = {"6798A2BF1C0DE354"}, z[100], resultado[1000] = {'-'};
    int i, j, k;
    int testes, pos = 1, contador = 0;

    scanf("%d", &testes);
    getchar();

    for(i = 0; i < testes; i++) {
        scanf("%100[^\n]", z);
        getchar();

        for(j = 0; j < strlen(z); j++) {
            if (!((z[j] >= 48 && z[j] <= 57) || (z[j] >= 65 && z[j] <= 90))) {
                printf("Alguma senha eh invalida!\n");
                return 1;
            }
        }
        for(j = 0; j < strlen(z); j++) {
            resultado[pos] = z[j];

            for(k = 0; k < strlen(x); k++) {
                if(z[j] == x[k]) {
                    resultado[pos] = y[k];
                }
            }
            pos++;
        }

        if(i + 1 != testes) {
            resultado[pos] = '-';
        }
        pos++;
    }
    resultado[pos] = '\0';

    for(i = 0; i < strlen(resultado); i++) {
        if((resultado[i] >= 48 && resultado[i] <= 57) || (resultado[i] >= 65 && resultado[i] <= 90)) {
            if(resultado[i] != '-') {
                contador++;
            }
        }
    }

    printf("%s %d\n", resultado, contador);
    return 0;
}