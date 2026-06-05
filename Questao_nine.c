#include <stdio.h>

int main(){
    int quantidade; 
    float valor, soma, media; 

    printf("Digite a quantidade atual de mercadorias: ");
    scanf("%d", &quantidade);

    for (int i=1; i<=quantidade; i+=1){
        valor=0;
        printf("Digite o valor da %d° mercadoria: ", i);
        scanf("%f", &valor);

        soma+=valor;
    }

    media=soma/quantidade;

    printf("O estoque possuia atualmente %d mercadorias\n", quantidade);
    printf("A média dos preços é igual a R$ %.2f\n", media);
    
}

