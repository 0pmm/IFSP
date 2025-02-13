#include <stdio.h>

int main (){
    int H, M;
        scanf("%d\n%d", &H, &M);
    if (H == 00){
        H = 12;
        printf("%d\n%02d\nam\n", H, M);
    }
    else if (H < 12){
        printf("%02d\n%02d\nam\n", H, M);
    }
    else if (H == 12){
        printf("%02d\n%02d\npm\n", H, M);
    }
    else if (H > 12 && H <= 23){
        H = H - 12;
        printf("%02d\n%02d\npm\n", H, M);
    }
}