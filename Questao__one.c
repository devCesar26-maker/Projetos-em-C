#include <stdio.h>

int main(){
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    if (A>B && B>C || A>C && C>B){
        if (A>=B+C){
            printf("NAO FORMA TRIANGULO\n");
        } else if (A*A==B*B+C*C){
            printf("TRIANGULO RETANGULO\n");
        } else if (A*A>B*B+C*C){
            printf("TRIANGULO OBTUSANGUULO\n");
        } else if (A*A<B*B+C*C){
            printf("TRIANGULO ACUTANGULO\n");
        }
    } else if (C>A && A>B || C>B && B>A){
        if (C>=B+A){
            printf("NAO FORMA TRIANGULO\n");
        } else if (C*C==B*B+A*A){
            printf("TRIANGULO RETANGULO\n");
        } else if (C*C>B*B+A*A){
            printf("TRIANGULO OBTUSANGUULO\n");
        } else if (C*C<B*B+A*A){
            printf("TRIANGULO ACUTANGULO\n");
        }
    } else if (B>A && A>C || B>C && C>A){
         if (B>=A+C){
            printf("NAO FORMA TRIANGULO\n");
        } else if (B*B==A*A+C*C){
            printf("TRIANGULO RETANGULO\n");
        } else if (B*B>A*A+C*C){
            printf("TRIANGULO OBTUSANGUULO\n");
        } else if (B*B<A*A+C*C){
            printf("TRIANGULO ACUTANGULO\n");
        }
    } else if (A==B && B==C){
        printf("TRIANGULO EQUILATERO\n");
    } else if (A==B && B!=C || A==C && C!=B || B==C && B!=A){
        printf("TRIANGULO ISOCELES\n");
    }
}