#include <stdio.h>

int main (){
    int D, M, A;
    scanf("%d%d%d", &D, &M, &A);
    
    switch (M){
        case 1: if (D > 31) { printf("Data invalida\n");}; break;
        case 2: if (D > 28) { printf("Data invalida\n");}; break;
        case 3: if (D > 31) { printf("Data invalida\n");}; break;
        case 4: if (D > 30) { printf("Data invalida\n");}; break;
        case 5: if (D > 31) { printf("Data invalida\n");}; break;
        case 6: if (D > 30) { printf("Data invalida\n");}; break;
        case 7: if (D > 31) { printf("Data invalida\n");}; break;
        case 8: if (D > 31) { printf("Data invalida\n");}; break;
        case 9: if (D > 30) { printf("Data invalida\n");}; break;
        case 10: if (D > 31) { printf("Data invalida\n");}; break;
        case 11: if (D > 30) { printf("Data invalida\n");}; break;
        case 12: if (D > 31) { printf("Data invalida\n");}; break;
        default: printf("Data invalida\n");
    }
    switch (M){
        case 1: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 2: if (D > 0 && D < 28) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 3: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 4: if (D > 0 && D < 30) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 5: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 6: if (D > 0 && D < 30) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 7: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 8: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 9: if (D > 0 && D < 30) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 10: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 11: if (D > 0 && D < 30) {printf("%d.%d.%d\n", D + 1, M, A);}; break;
        case 12: if (D > 0 && D < 31) {printf("%d.%d.%d\n", D + 1 , M, A);}; break;
    }
    switch (M){
        case 1: if (D == 31) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 2: if (D == 28) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 3: if (D == 31) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 4: if (D == 30) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 5: if (D == 31) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 6: if (D == 30) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 7: if (D == 31) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 8: if (D == 31) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 9: if (D == 30) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 10: if (D == 31) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 11: if (D == 30) { M++; printf("%d.%d.%d\n", D = 1, M, A);}; break;
        case 12: if (D == 31) { A ++; printf("%d.%d.%d\n", D = 1, M = 1, A);}; break;
    }
    return 0;
}