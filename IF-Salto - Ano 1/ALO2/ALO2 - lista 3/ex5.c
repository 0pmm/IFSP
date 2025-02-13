#include <stdio.h>
#include <stdlib.h>

double calculo(int tam) {
    int i;
    double *m, soma, media;

    soma = 0.0;
    m = (double *)malloc(tam * sizeof(double));
    if (m == NULL) {
        exit(1);
    }

    for (i = 0; i < tam; i++) {
        scanf("%lf", &m[i]);
        soma += m[i];
    }

    media = soma / tam;
    free(m);
    return media;
}

int main() {
    int tam;

    scanf("%d", &tam);
    printf("%.2lf\n", calculo(tam));

    return 0;
}
