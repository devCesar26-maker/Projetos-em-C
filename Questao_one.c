#include <stdio.h>

int main(){
    float valor1, valor2, divisao;
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    if (valor2==0){
        printf("O segundo valor é inválido! Digite novamente: ");
        scanf("%f", &valor2);
    }

    divisao=valor1/valor2;

    printf("O resultado da divisão é %f\n", divisao);
}


