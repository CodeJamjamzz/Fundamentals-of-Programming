#include <stdio.h>

void ChristmasTree(int end);

int main (){
    int end;

    printf("Enter a number: ");
    scanf("%d", &end);

    ChristmasTree(end);
}

void ChristmasTree(int end){
    for(int row = 1; row <= end; row++){
        for(int space = 1; space <= end - row; space++){
            printf("_");
        }

        for(int star = 1; star <= (2*row)-1; star++){
            printf("*");
        }

        printf("\n");
    }

    for(int row2 = 1; row2 <= end - 1; row2++){
        for(int space2 = 1; space2 <= row2; space2++){
            printf("_");
        }

        for(int star2 = end+1; star2 >= (2*row2)-1; star2--){
            printf("*");
        }

        printf("\n");
    }
}