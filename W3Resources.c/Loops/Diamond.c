#include <stdio.h>

int main (){
    int end;

    printf("Enter a number: ");
    scanf("%d", &end);

    for(int height = 1; height <= end-1; height++){
        for(int space = end; space >= height; space--){
            printf(" ");
        }
        
        for(int star = 1; star <= height; star++){
            printf("* ");

        }

        printf("\n");
    }

    for(int star = 1; star <= end+1; star++){
        printf("* ");

    }

    printf("\n");

    for(int height = 1; height <= end; height++){
        for(int space = 1; space <= height+1; space++){
            printf(" ");
        }
        
        for(int star = end-1; star >= height; star--){
            printf("* ");
        }

        printf("\n");
    }
}