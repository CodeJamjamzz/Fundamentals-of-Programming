#include<stdio.h>

int main (){

    int x;

    printf("ENter value ");
    scanf("%d", &x);

    for (int s = 0; s > 0; s++){
        x = x/10;

        if (x < 1){
            printf("%d", s);
            break;
        }
    }

    return 0;
}