#include <stdio.h>


int main(){
    int A, B, C, valido;

    scanf("%d %d %d", &A, &B, &C);

    if (A+B-C==0){
        valido=1;
    } else if (A-B+C==0){
        valido=1;
    } else if (B+C-A==0){
        valido=1;
    } else if (A-B-C==0){
        valido=1;

    
}