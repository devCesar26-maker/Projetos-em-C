#include <stdio.h>

int main(){
    int valor, auxiliar;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for (int i=1; i<=10; i+=1){
        auxiliar=i*valor;
        printf("%d x %d = %d\n ",i,  valor, auxiliar);
    }
}