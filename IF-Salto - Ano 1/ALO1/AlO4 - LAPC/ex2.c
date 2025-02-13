#include <stdio.h>

int main() {
    int x, distancia, somatoria = 0, point, aux;
    int v[1000];
    int i, j;

    scanf("%d", &x);
    for(i = 0; i < x; i++) {
        scanf("%d", &v[i]);
    }
    for(i = 0; i < x - 1; i++) {
        for(j = i + 1; j < x; j++) {
            if(v[i] > v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    if (x % 2 != 0) {
        point = v[x / 2];
    }
    else {
        point = v[x / 2 - 1];
    }

    for(i = 0; i < x; i++) {
        distancia = v[i] - point;
        if (distancia < 0) {
            distancia *= -1;
        }
        somatoria += distancia;
    }
    printf("%d %d\n", somatoria, point);
    return 0;
}