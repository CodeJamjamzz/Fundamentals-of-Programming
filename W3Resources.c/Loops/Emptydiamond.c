#include <stdio.h>

int main (){
    int end;

    printf("Enter a number: ");
    scanf("%d", &end);

    for(int row = 1; row <= end; row++){
        for(int star = end; star >= row; star--){
            printf("*");
        }

        for(int space = 2; space < row*2; space++){
            printf(" ");
        }

        for(int star = end; star >= row; star--){
            printf("*");
        }

       printf("\n");
    }

    for(int row2 = 1; row2 <= end; row2++){
        for(int star2 = 1; star2 <= row2; star2++){
            printf("*");
        }

        for(int space2 = (end*2)-1; space2 >= row2*2; space2--){
            printf(" ");
        }

        for(int star2 = 1; star2 <= row2; star2++){
            printf("*");
        }

        printf("\n");
    }
}