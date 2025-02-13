#include <stdio.h>
#include <math.h>

int contador (int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return contador(n / 10) + 1;
    }

}
double Armstrong (int n, int m) {
    if (n == 0) {
        return 0;
    }
    else {
        return (double)pow(n % 10, m) + Armstrong(n / 10, m);
    }
}

int main() {
    int x;
    
    scanf("%d", &x);
    
    if (Armstrong(x, contador(x)) == x) {
        printf("Armstrong\n");
    } else {
        printf("soma: %.0lf\n", Armstrong(x, contador(x)));
    }
    
    return 0;
}