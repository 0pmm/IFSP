#include <stdio.h>

int main (){
    double Porcentagem, MAX, Vv;
    scanf("%lf\n%lf", &MAX, &Vv);

    Porcentagem = ((Vv - MAX) / MAX) * 100;
    if (Vv <= MAX){
        printf("0.00\n0\n");
    }
    else if ((int)Porcentagem <= 20.0){
        printf("85.13\n4\n");
    }
    else if ((int)Porcentagem > 20.0 && Porcentagem <= 50.0){
        printf("127.69\n5\n");
    }
    else if ((int)Porcentagem > 50.0){
        printf("574.62\n7\n");
    }
    return 0; 
}