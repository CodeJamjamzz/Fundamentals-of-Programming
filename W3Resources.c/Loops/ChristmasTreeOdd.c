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
        for(int space = 1; space <= (end - row)+1; space++){
            printf(" ");
        }

        for(int star = 1; star <= (2*row)-1; star++){
            printf("*");
        }

        printf("\n");
    }

    for(int row2 = 1; row2 <= end - 1; row2++){
        for(int space2 = 1; space2 <= end - row2; space2++){
            printf(" ");
        }

        for(int star2 = 1; star2 <= (2*row2)+1; star2++){
            printf("*");
        }

        printf("\n");
    }

    for(int stem = 1; stem < end; stem++){
        for(int space3 = 1; space3 <= end-1; space3++){
            printf(" ");
        }

        for(int star3 = 1; star3 <= 3; star3++){
            printf("*");
        }

        printf("\n");
    }
}