#include <stdio.h>

void AnalisarSituacao(double x, double y, double z, double a) {
    double soma = 0;
    x = x * 1;
    y = y * 2;
    z = z * 3;
    a = a * 4;
    soma = x + y + z + a;
    soma = soma/10;
    if (soma < 3) {
        printf("reprovado\n");
    } else if (soma < 7) {
        printf("prova final\n");
    } else if (soma < 9) {
        printf("aprovado\n");
    } else {
        printf("aprovado com louvor\n");
    }
}

int main () {
    double n1, n2, n3, n4;

    scanf("%lf %Lf %lf %lf", &n1, &n2, &n3, &n4);
    AnalisarSituacao(n1, n2, n3, n4);

    return 0;
}