#include <stdio.h>

int main(){

    int A, B, C;
    scanf("%d\n%d\n%d", &A, &B, &C);

    if (A == B && B == C) {
        printf("*\n");
    }
    else if (A != B && B == C) {
            printf("A\n");
        }
        else if (B != C && C == A) {
                printf("B\n");
            }
            else if (C != A && A == B) {
                printf("C\n");
            }
    return 0;
}