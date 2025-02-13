#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[101];
    int qtd;
    double preco;
} nota_fiscal;

int main () {
    nota_fiscal n_f[1000];
    nota_fiscal temp;
    int i, j, x, dia, mes;
    double Total = 0, Dinheiro;

    scanf("%d", &x);
    getchar();

    for(i = 0; i < x; i++) {
        scanf("%s", n_f[i].nome);
        scanf("%lf %d", &n_f[i].preco, &n_f[i].qtd);
        Total += n_f[i].preco * n_f[i].qtd;
    }

    scanf("%*[^0-9]%2d/%2d", &dia, &mes);
    scanf("%*[^0-9]%lf", &Dinheiro);


    for (i = 0; i < x - 1; i++) {
        for (j = i + 1; j < x; j++) {
            if (strcmp(n_f[i].nome, n_f[j].nome) > 0) {
                temp = n_f[i];
                n_f[i] = n_f[j];
                n_f[j] = temp;
            }
        }
    }

    printf("=============\n");
    printf("NF - 0123\nData - %02d/%02d\n", dia, mes);
    printf("=============\n");
    for(i = 0; i < x; i++) {
        printf("%dx %s - R$%.2lf\n", n_f[i].qtd, n_f[i].nome, n_f[i].qtd * n_f[i].preco);
    }
    printf("\nValor Total - R$%.2lf\n", Total);
    printf("Pago - R$%.0lf\n", Dinheiro);
    printf("Troco - R$%.2lf\n", Dinheiro - Total);
    printf("=============\n");

    return 0;
}
