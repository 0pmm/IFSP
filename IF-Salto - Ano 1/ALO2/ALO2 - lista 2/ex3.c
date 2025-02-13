#include <stdio.h>

int main() {
    int M[3][3];
    int menor = 100, delta, soma_n_principal = 0, positivos = 0;
    double media_pos = 0.0;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
            if (M[i][j] < menor) {
                menor = M[i][j];
            }
            if (M[i][j] > 0) {
                media_pos += M[i][j];
                positivos++;
            }
        }
    }

    if (menor % 2 == 0) {
        delta = 1;
    } else {
        delta = 0;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) {
                soma_n_principal += M[i][j];
            }
        }
    }

    if (positivos > 0) {
        printf("%.2lf %d %d %d\n", media_pos / (double)positivos, menor, delta, soma_n_principal);
    } else {
        printf("0.00 %d %d %d\n", menor, delta, soma_n_principal);
    }

    return 0;
}