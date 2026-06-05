#include <stdio.h>

int main(){
    int S, T, F, C;

    scanf("%d %d %d", &S, &T, &F);

    C=S+T+F;
    if (C>24){
        C-=24;
        printf("%d\n", C);
    } else if (C==24){
        printf("%d\n", 0);

    } else if (C<0){
        C=24+C;
        printf("%d\n", C);

    } else {
        printf("%d\n", C);
    }
    return 0;


}