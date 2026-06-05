#include <stdio.h>

int main(){
    float soma, media;
    soma=0;

    for (int i=15; i<=100; i+=1){
        soma+=i;
    }

    media=soma/86;
    
    printf("O valor da média aritmética dos valores é igual a %f\n", media);

}



