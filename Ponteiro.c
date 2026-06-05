#include <stdio.h>
int main() {



    int numero = 50;
    int *p = &numero;
    printf("Valor: %d\n", numero);
    printf("Endereco: %p\n", &numero);
    printf("Valor pelo ponteiro: %d\n", *p);

}