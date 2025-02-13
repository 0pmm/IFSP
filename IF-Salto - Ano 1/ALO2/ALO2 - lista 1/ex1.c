#include <stdio.h>
#include <string.h>

int main() {
    char nome[401], temp[401], ultimo[401];
    int i, j = 0, x;

    scanf("%400[^\n]", nome);

    for(i = strlen(nome) - 1; i >= 0 && nome[i] != ' '; i--, j++) {
        temp[j] = nome[i];
    }
    temp[j] = '\0';
    
    x = strlen(temp) - 1;
    for(i = 0; i < strlen(temp); i++, x--) { 
        ultimo[i] = temp[x];
    }
    ultimo[i] = '\0';


    printf("%s", ultimo);
    return 0;
}
