#include <stdio.h>
#include <stdlib.h>

int main (){
    int P1, P2, P3, A1, A2, A3, MENOR;
    scanf("%d\n%d\n%d", &P1, &P2, &P3);
    A1 = ((P1*0)+(P2*2)+(P3*4));
    A2 = ((P1*2)+(P2*0)+(P3*2));
    A3 = ((P1*4)+(P2*2)+(P3*0));
    MENOR = ( A1 + A2 - abs(A1-A2))/2;
    MENOR = ( MENOR + A3 - abs(MENOR-A3))/2;
    printf("%d\n", MENOR);
    return 0;    
}