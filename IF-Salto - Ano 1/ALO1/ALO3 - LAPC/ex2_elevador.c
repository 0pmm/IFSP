#include <stdio.h>

int main () {
    int leituras, Cmax, trafego = 0, Tmax = 0, E, S;
    scanf("%d %d", &leituras, &Cmax);
    for (int i = 0; i < leituras; i++) {
        scanf("%d %d", &S, &E);
        trafego = trafego - S + E;
        if (Tmax < trafego) {
            Tmax = trafego;
        }
    }
    if (Tmax > Cmax){
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}