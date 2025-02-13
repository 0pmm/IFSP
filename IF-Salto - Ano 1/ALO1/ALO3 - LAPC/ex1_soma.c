#include <stdio.h>

int main () {
    int x, y, soma = 0;
    scanf("%d\n%d", &x, &y);
    if (y == 0) {
        printf("0\n");
    }
    else {
        if ( y > 0 ) {
            while(y > 0) {
            soma = soma + x;
            y--;
            }
        }
        else if ( y < 0) {
            while(y < 0) {
            soma = soma - x;
            y++;
            }
        }
        printf("%d\n", soma);
    }
    return 0;   
}