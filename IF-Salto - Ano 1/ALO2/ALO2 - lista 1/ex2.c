#include <stdio.h>
#include <string.h>
int main() {
    int x, i, j, contador;
    double preco, kilos=0.0, gastos = 0.0, total=0.0;
    char frutas[50];

    scanf("%d", &x);

    for(i = 1; i < x + 1; i++){
        contador = 1;
        scanf("%lf", &preco);
        getchar();
        gastos += preco;
        scanf(" %49[^\n]%*c", frutas);
        
        for(j = 0; j < strlen(frutas); j++){
            if(frutas[j] == ' '){
            contador++; 
            } 
    }
    total += contador;
          printf("dia %d: %d kg\n", i, contador);
    }
    kilos = total / x;
    printf("%.2lf kg por dia\n", kilos);
    gastos = gastos / x;
    printf("R$ %.2lf por dia\n", gastos);
    return 0;
}