#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[20], palavra2[20];

    // loop até que as duas palavras sejam iguais
    while (1) {
        scanf("%s %s", palavra1, palavra2);

        if (strcmp(palavra1, palavra2) == 0) {
            break; // encerra se forem iguais
        }

        if (strcmp(palavra1, palavra2) < 0) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
    }

    return 0;
}
