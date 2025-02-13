#include <stdio.h>
#include <math.h>

typedef struct {
    double hogsmeade;
    double kakariko;
    double solitude;
} Distancias;

Distancias vilas(int x, int z) {
    Distancias distancias;

    distancias.hogsmeade = sqrt(pow(x - 34, 2) + pow(z - 220, 2));
    distancias.kakariko = sqrt(pow(x - 0, 2) + pow(z - 0, 2));
    distancias.solitude = sqrt(pow(x - 140, 2) + pow(z - 456, 2));

    return distancias;
}

int main() {
    int X, Z;
    Distancias distancias;

    scanf("%d %d", &X, &Z);
    distancias = vilas(X, Z);

    printf("Distancia para Hogsmeade: %.2lf\n", distancias.hogsmeade);
    printf("Distancia para Kakariko: %.2lf\n", distancias.kakariko);
    printf("Distancia para Solitude: %.2lf\n", distancias.solitude);

    return 0;
}
