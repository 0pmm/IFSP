#include <stdio.h>

int STFfunction (int a) {
    if(a == 0) {
        return 10;
    }
    else if(a == 1) {
        return 11;
    }
    else if(a == 2){
        return 27;
    }
    else {
        return STFfunction(a - 2) - STFfunction(a - 3);
    }
}

int main () {
    int x = 1;

    while(scanf("%d", &x) == 1) {
        printf("%d\n", STFfunction(x));
    }
    
    return 0;
}