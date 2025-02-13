#include <stdio.h>

int main () {
    int x, v[10], cont = 0, i, j;
    
    for(i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    
    for(j = 0; j < 10; j++) {
        if (v[j] == x) {
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}