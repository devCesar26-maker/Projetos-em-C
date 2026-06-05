#include <stdio.h>
#include <stdlib.h>

int maiorElemento(int *vetor, int n){
    for (int i = 0; i < n; i += 1){
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    int maior = vetor[0]; 
    for (int i = 1; i < n; i += 1){
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    return maior;
}

int main(){
    int n;
    printf("Digite quantos elementos o vetor deve ter: ");
    scanf("%d", &n);

    int *meu_vetor = malloc(n * sizeof(int));

    int resultado = maiorElemento(meu_vetor, n);

    printf("\nO maior elemento digitado foi: %d\n", resultado);

    free(meu_vetor);
    return 0;
}