#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    if (idade>=18){
        printf("%s,  você é maior de idade. \n", nome);
    } else {
        printf("%s, você é menor de idade. \n", nome);
    }

    return 0;
}




