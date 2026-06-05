#include <stdio.h>

int main(){
    float soma, media, valor;
    soma=0;

    for (int i=1; i<=10; i+=1){
        printf("Digite o %d° valor: ", i);
        scanf("%f", &valor);
        soma+=valor;


    }

    media=soma/10;
    printf("A média aritmética dos valores digitados é igual a %.2f\n", media);
}



