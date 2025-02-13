#include <stdio.h>

void conversor(int y) {
    if (y == 0) {
        return;
    }
    else {
        conversor(y / 2);
        printf("%d\n", y % 2);
    }
}

int main() {
    int x;
    
    scanf("%d", &x);
    if(x == 0) {
        printf("0\n");
    }
    else{
        conversor(x);        
    }
    
    return 0;
}