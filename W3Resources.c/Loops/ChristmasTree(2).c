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

    
}