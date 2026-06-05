#include <stdio.h>

int quadrado(int a){
    return a*a;
}

int main(){
    int a; 

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("O quadrado desse número é %d\n", quadrado(a));
}