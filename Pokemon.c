#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char lista[N][1005];
    int unicos = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s", lista[i]);
    }

    for (int i = 0; i < N; i++) {
        int repetido = 0;
        for (int j = 0; j < i; j++) {
            if (strcmp(lista[i], lista[j]) == 0) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            unicos++;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151 - unicos);

    return 0;
}
