#include <stdio.h>

int main () {
    double i_p[3][4];
    int i, j;
    double ovo, farinha, acucar, carne;
    double pastel, empada, kibe;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4;j++){
            scanf("%lf", &i_p[i][j]);
        }
    }
    scanf("%lf%lf%lf%lf", &ovo, &farinha, &acucar, &carne);
    for(j = 0; j < 4; j++) {
        if(j == 0){
            pastel += i_p[0][j]*ovo;
            empada += i_p[1][j]*ovo;
            kibe += i_p[2][j]*ovo;
        }
        else if(j == 1){
            pastel += i_p[0][j]*farinha;
            empada += i_p[1][j]*farinha;
            kibe += i_p[2][j]*farinha;
        }
        else if(j == 2){
            pastel += i_p[0][j]*acucar;
            empada += i_p[1][j]*acucar;
            kibe += i_p[2][j]*acucar;
        }
        else if(j == 3){
            pastel += i_p[0][j]*carne;
            empada += i_p[1][j]*carne;
            kibe += i_p[2][j]*carne;
        }
    }
    printf("%.2lf\n%.2lf\n%.2lf\n", pastel, empada, kibe);
    return 0;

}

