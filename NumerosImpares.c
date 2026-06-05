#include <stdio.h>

int main(){
    int valor;

    scanf("%d", &valor);

    for (int i=1; i<=valor; i+=1){
        if (i%2!=0){
            printf("%d\n", i);
        }
    }
}