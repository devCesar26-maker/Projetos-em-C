#include <stdio.h>

int main(){
    int N;

    printf("Digite um valor maior que 0: ");
    scanf("%d", &N);

    if (N<0){
        printf("Valor inválido! Digite novamente: ");
        scanf("%d", &N);
    }

    for (int i=1; i<=N; i+=1){
        printf("%d\n", i);
    }
}

