#include <stdio.h>
#include <string.h>

typedef struct {
    char modelo[41];
    int ram;
    double cpu, cam, mA;
} aparelho;

int main () {
    aparelho celular[10], temp;
    int m[10];
    int contador = 0, x = 0, busca_ram;
    double busca_cpu, busca_cam, busca_mA;
    char s[10];
    int i, j;

    scanf("%s", s);
    getchar();

    while(strcmp(s, "s") == 0 && contador < 10) {
        scanf("%[^\n]s", celular[contador].modelo);
        getchar();
        scanf("%d", &celular[contador].ram);
        scanf("%lf", &celular[contador].cpu);
        scanf("%lf", &celular[contador].cam);
        scanf("%lf", &celular[contador].mA);
        contador++;
        scanf("%s", s);
        getchar();
    }

    scanf("%d", &busca_ram);
    scanf("%lf", &busca_cpu);
    scanf("%lf", &busca_cam);
    scanf("%lf", &busca_mA);

    for(i = 0, j = 0; i < contador; i++) {
        if(celular[i].ram >= busca_ram && celular[i].cpu >= busca_cpu && celular[i].cam >= busca_cam && celular[i].mA >= busca_mA) {
            m[j] = i;
            j++;
            x++;
        }
    }

    if(x > 0) {
        for(i = 0; i < x; i++) {
        printf("Modelo: %s\n", celular[m[i]].modelo);
        printf("Memoria: %dGB\n", celular[m[i]].ram);
        printf("Procesador: %.2lfGHz\n", celular[m[i]].cpu);
        printf("Camera: %.2lfMPixels\n", celular[m[i]].cam);
        printf("Bateria: %.2lfmA\n", celular[m[i]].mA);
        printf("\n");
        }
        printf("%d smartphones encontrados.\n", x);
    }
    else {
        printf("%d smartphones encontrados.\n", x);
    }

    return 0;
}
