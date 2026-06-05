#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, r;
    printf("Digite a quantidade inicial de elementos do vetor: ");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria inicial.\n");
        return 1;
    }

    for (int i = 0; i < n; i += 1){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a quantidade a mais de elementos: ");
    scanf("%d", &r);

    int *temporario = realloc(vetor, (n + r) * sizeof(int));
    if (temporario == NULL) {
        printf("Erro: Nao foi possivel aumentar o vetor. Memoria cheia!\n");
        free(vetor); 
        return 1;
    }
    vetor = temporario; 

    for (int i = n; i < n + r; i += 1){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int a = 0; a < n + r; a += 1){
        printf("Posicao %d: %d\n", a + 1, vetor[a]);
    }

    free(vetor);
    return 0;
}