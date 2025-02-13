#include <stdio.h>

int main ()  {
    int X = 1, casas = 0;
    double soma_multa, multa;
    for (int i = 0; i < 999; i ++) {
        scanf("%d", &X);
        i = X;
            if ((X > 2)&&(X != 999)) {
                X -= 2;
                multa = X * 12.89;
                soma_multa += multa;
                casas++;
            }
    }
    printf("%.2lf\n%d\n", soma_multa, casas);
    return 0;
}