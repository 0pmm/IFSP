#include <stdio.h>

int main() {
    int programa, tempo, duracao[1000], entretenimento[1000];
    int x, i, m_proveito = -1, m_canal = -1, quilometragem ;

    scanf("%d %d", &programa, &tempo);
    for (x = 0; x < programa; x++) {
        scanf("%d", &duracao[x]);
    }
    for (x = 0; x < programa; x++) {
        scanf("%d", &entretenimento[x]);
    }
    for (x = 0; x < programa; x++) {
        quilometragem = duracao[x] + x;
        if (quilometragem <= tempo) {
            if(entretenimento[x] > m_proveito) {
                m_proveito = entretenimento[x];
                m_canal = x + 1;
            }
        }
    }
    printf("%d\n", m_canal);
    return 0;
}