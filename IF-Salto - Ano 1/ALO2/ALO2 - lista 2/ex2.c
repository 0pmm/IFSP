#include <stdio.h>
#include <string.h>

#define MAX 100001

typedef struct {
    char atalho;
    char subs[11];
} Atalho;

int main() {
    Atalho atalhos[26];
    int T, N, encontrado;
    int i, j, k;
    char String[MAX], C;

    scanf("%d", &T);
    
    for(k = 0; k < T; k++) {
        scanf("%s", String);
        scanf("%d", &N);


        for (i = 0; i < N; i++) {
            scanf(" %c %s", &C, atalhos[i].subs);
            atalhos[i].atalho = C;
        }
        
        for (i = 0; String[i] != '\0'; i++) {
            if (String[i] == '*') {
                C = String[i + 1];
                encontrado = 0;
                
                if (C >= 'A' && C <= 'Z') {
                    for (j = 0; j < N; j++) {
                        if (atalhos[j].atalho == C) {
                            printf("%s", atalhos[j].subs);
                            encontrado = 1;
                        }
                    }
                    if (encontrado) {
                        i++;
                    } else {
                        printf("*%c", C);
                        i++;
                    }
                } else {
                    
                    printf("*");
                }
            } else {
                printf("%c", String[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
