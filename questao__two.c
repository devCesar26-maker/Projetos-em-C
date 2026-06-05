#include <stdio.h>

int main(){
    int A;
    int pares, impares, negativos, positivos;
    pares=0;
    impares=0;
    negativos=0;
    positivos=0;

    for (int i=1; i<=5; i+=1){
        scanf("%d", &A);
        if (A>0){
            positivos+=1;
        } 
        if (A<0){
            negativos+=1;
        }
        if (A%2==0){
            pares+=1;
        } 
        if (A%2!=0){
            impares+=1;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}