#include <stdio.h>
#include <string.h>

int main() {
    char x[201], y[201], n_y[201], n_x[201], aux;
    int i, j, k, a;

    j = 0;
    k = 0;

    scanf(" %200[^\n]", x);
    scanf(" %200[^\n]", y);

    for(i = 0; x[i] != '\0'; i++) {
        if(x[i] >= 'A' && x[i] <= 'Z') {
            n_x[j++] = x[i] + 32;
        }
        else if((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= '0' && x[i] <= '9')) {
            n_x[j++] = x[i];
        }
        else if(x[i] != ' ' && x[i] != '.' && x[i] != ',' && x[i] != '!' && x[i] != '?') {
            n_x[j++] = x[i];
        }
    }
    n_x[j] = '\0';

    for(i = 0; y[i] != '\0'; i++) {
        if(y[i] >= 'A' && y[i] <= 'Z') {
            n_y[k++] = y[i] + 32;
        }
        else if((y[i] >= 'a' && y[i] <= 'z') || (y[i] >= '0' && y[i] <= '9')) {
            n_y[k++] = y[i];
        }
        else if(y[i] != ' ' && y[i] != '.' && y[i] != ',' && y[i] != '!' && y[i] != '?') {
            n_y[k++] = y[i];
        }
    }
    n_y[k] = '\0';

    for(i = 0; i < j - 1; i++) {
        for(a = i + 1; a < j; a++) {
            if(n_x[i] > n_x[a]) {
                aux = n_x[i];
                n_x[i] = n_x[a];
                n_x[a] = aux;
            }
        }
    }

    for(i = 0; i < k - 1; i++) {
        for(a = i + 1; a < k; a++) {
            if(n_y[i] > n_y[a]) {
                aux = n_y[i];
                n_y[i] = n_y[a];
                n_y[a] = aux;
            }
        }
    }

    if(strcmp(n_x, n_y) == 0) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    return 0;
}