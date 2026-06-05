#include <stdio.h>
int somar(int a, int b){
    return a+b;
}

int subtrair(int a, int b){
    return a-b;
}

int multiplicar(int a, int b){
    return a*b;
}

int dividir(int a, int b){
    if (b==0){
        return -99999999;
    }
    return a/b;
}

int main(){
    int a, b;

    a=10;
    b=11;


    printf("%i + %i = %i\n", a, b, somar(a, b));
    printf("%i - %i = %i\n", a, b, subtrair(a, b));
    printf("%i x %i = %i\n", a, b, multiplicar(a, b));
    printf("%i / %i = %.8f\n", a, b, dividir(a, b));

}


