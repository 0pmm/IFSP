#include <stdio.h>

int eh_primo(int n) {
    int i;
    if (n == 1) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int proximo_primo(int n) {
    int proximo = n + 1;
    while (!eh_primo(proximo)) {
        proximo++;
    }
    return proximo;
}

double fatorial(int n) {
    double resultado = 1;
    int i;
    for (i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main () {
    int x, i, j;
    double final;

    scanf("%d", &x);
    
    if(x == 0) {
        printf("0.00\n");
        return 0;
    }
    else {
        for(i = 1; i <= x; i++){
            printf("%d!", i);

            // Unificando os if-else para checar se o número é primo ou não
            if (i < x) {
                j = eh_primo(i) ? i : proximo_primo(i);
                printf("/%d + ", j);
            } else {
                j = eh_primo(i) ? i : proximo_primo(i);
                printf("/%d", j);
            }
        }
        printf("\n");
        final = fatorial(x);
        printf("%.2lf\n", final);
    }
    return 0;
}
