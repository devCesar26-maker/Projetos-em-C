#include <stdio.h>
#include <string.h>

int main() {
    char esqueleto[20], grupo[20], comida[20];

    scanf("%s", esqueleto);
    scanf("%s", grupo);
    scanf("%s", comida);

    if (strcmp(esqueleto, "vertebrado") == 0) {
        if (strcmp(grupo, "ave") == 0 && strcmp(comida, "carnívoro") == 0) {
            printf("aguia\n");
        } else if (strcmp(grupo, "ave") == 0 && strcmp(comida, "onívoro") == 0) {
            printf("pomba\n");
        } else if (strcmp(grupo, "mamífero") == 0 && strcmp(comida, "onívoro") == 0) {
            printf("homem\n");
        } else if (strcmp(grupo, "mamífero") == 0 && strcmp(comida, "herbivoro") == 0) {
            printf("vaca\n");
        }
    } else if (strcmp(esqueleto, "invertebrado") == 0) {
        if (strcmp(grupo, "inseto") == 0 && strcmp(comida, "hematofogo") == 0) {
            printf("pulga\n");
        } else if (strcmp(grupo, "inseto") == 0 && strcmp(comida, "herbivoro") == 0) {
            printf("lagarta\n");
        } else if (strcmp(grupo, "anelídeo") == 0 && strcmp(comida, "hematofogo") == 0) {
            printf("sanguessuga\n");
        } else if (strcmp(grupo, "anelídeo") == 0 && strcmp(comida, "onívoro") == 0) {
            printf("minhoca\n");
        }
    }

    return 0;
}
