#include <stdio.h>

int MOD(int n, int m) {
    if(m == 0) {
        return -1;
    }
    if(n < 0){
        n *= -1;
    }
    if(m < 0) {
        m *= -1;
    }
    if(n == 0 && m == 0) {
        return 0;
    }
    if(n >= m){
        return MOD(n - m, m);
    }
    return n;
}


int main() {
    int x, y;

    scanf("%d%d", &x, &y);
    printf("%d\n", MOD(x, y));

    return 0;
}
