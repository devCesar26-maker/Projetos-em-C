#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, soma;
    soma=0;

    printf("Digite quantos elementos o vetor deve ter: ");
    scanf("%d", &n);

    int *vetor;
    vetor=malloc(n*sizeof(int));

    for (int i=0; i<n; i+=1){
        vetor[i]=(i+1)*10;
        soma+=vetor[i];
    }

    printf("%d\n", soma);
    free(vetor);
    return 0;


}