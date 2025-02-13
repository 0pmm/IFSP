#include <stdio.h>

int ContaDigitosPares(int y) {
    int par;
    if (y == 0) {
        return 0;
    }
    else {
        if(y % 2 == 0) {
            par = 1;
        }
        else {
            par = 0;
        }
    }
    return par + ContaDigitosPares(y/10);
}

int main() {
    int x;
    
    scanf("%d", &x);
    printf("%d\n", ContaDigitosPares(x));

    return 0;
}
