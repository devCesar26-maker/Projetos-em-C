#include <stdio.h>

int main(){
    int contador;
    float valor;

    contador=0;

    for (int i=1; i<=10; i+=1){
        valor=0;
        printf("Digite o %d° valor: ", i);
        scanf("%f", &valor);

        if (valor<0){
            contador+=1;
        }
    }
    printf("Dos valores digitados, %d são negativos \n", contador);
}