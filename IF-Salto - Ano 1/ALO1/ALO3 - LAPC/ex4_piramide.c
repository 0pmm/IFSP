#include <stdio.h>

int main () {
    int x, y = 1, n;
    scanf("%d", &x);
    while ((x < 1)||(x > 30)) {
        scanf("%d", &x);
    } 
    for (int i = 1; i <= x; i++) {
        n = y;
        while (n > 0) {
            printf("%d", y);
            n--;
        }
        printf("\n");
        y++;
    }
    return 0;
}