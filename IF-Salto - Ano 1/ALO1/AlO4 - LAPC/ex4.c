#include <stdio.h>

int main () {
    int v[10000], j, i, y, x, maior, aux;
    
    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        scanf("%d", &v[i]);
    }
    for (j = 0; j < x - 1; j++) {
        maior = j;
        for ( y = j + 1; y < x; y++) {
            if ( v[y] > v[maior]) {
                maior = y;
            }
        }
        if (maior != j) {
            aux = v[j];
            v[j] = v[maior];
            v[maior] = aux;
        }
    }
    printf("%d %d %d\n", v[x - 1], v[(x-1)/2], v[0]);
    return 0;
}