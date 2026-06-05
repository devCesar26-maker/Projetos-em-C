#include <stdio.h>

void trocar(int *x, int *y){
    int auxiliar=*x;
    *x=*y;
    *y=auxiliar;
}


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    trocar(&a, &b);
    printf("%d %d\n", a, b);

}



