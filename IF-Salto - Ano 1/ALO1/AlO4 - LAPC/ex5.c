#include <stdio.h>

int main() {
    int x, y;
    int vetor[1000], moda[1000];
    int i, j, k;
    int  contador, max_repeticao , moda_contador, elemento_adicionado;
    double soma_media, mediana;

    scanf("%d", &x);

    for (i = 0; i < x; i++) {
        scanf("%d", &y);

        soma_media = 0;
        max_repeticao = 0;
        moda_contador = 0;

        for (j = 0; j < y; j++) {
            scanf("%d", &vetor[j]);
            soma_media += vetor[j];
        }

        for (j = 0; j < y - 1; j++) {
            for (k = j + 1; k < y; k++) {
                if (vetor[j] > vetor[k]) {
                    int temp = vetor[j];
                    vetor[j] = vetor[k];
                    vetor[k] = temp;
                }
            }
        }

        for (j = 0; j < y; j++) {
            contador = 0;
            for (k = 0; k < y; k++) {
                if (vetor[j] == vetor[k]) {
                    contador++;
                }
            }
            if (contador > max_repeticao) {
                max_repeticao = contador;
                moda_contador = 0;
                moda[moda_contador++] = vetor[j];
            } else if (contador == max_repeticao) {
                elemento_adicionado = 0;
                for (k = 0; k < moda_contador; k++) {
                    if (moda[k] == vetor[j]) {
                        elemento_adicionado = 1;
                        break;
                    }
                }
                if (elemento_adicionado != 1) {
                    moda[moda_contador++] = vetor[j];
                }
            }
        }

        if (y % 2 != 0) {
            mediana = vetor[y / 2];
        } else {
            mediana = (vetor[y / 2 - 1] + vetor[y / 2]) / 2.0;
        }

        printf("sequencia %d:\n", i + 1);
        for (j = 0; j < y; j++) {
            printf("%d ", vetor[j]);
        }
        printf("\n%d %d\n", vetor[0], vetor[y-1]);
        printf("%g\n", soma_media / y);

        if (max_repeticao > 1) {
            for (j = 0; j < moda_contador; j++) {
                printf("%d ", moda[j]);
            }
            printf("\n");
        } else {
            printf("\n");
        }

        printf("%g\n", mediana);
    }

    return 0;
}