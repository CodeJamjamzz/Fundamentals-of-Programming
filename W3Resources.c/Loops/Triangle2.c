#include <stdio.h>

int main (){
    int end; 

    printf("Enter a number: ");
    scanf("%d", &end);

    for(int height = 1; height <= end; height++){
        for(int star = 1; star <= height; star++){
            printf("*");
        }

        for(int space = (end*2); space >= (height*2); space--){
            if(height == end){
                printf("*");
            } else {
                printf(" ");
            }
        }

        for(int star = 1; star <= height; star++){
            printf("*");
        }

        printf("\n");
    }

    for(int height = 1; height <= end -1; height++){
        for(int star = end - 1; star >= height; star--){
            printf("*");
        }


    for(int space = 1; space <= (height*2)+1; space++){
                printf(" ");
    }
        
    for(int star = end - 1; star >= height; star--){
            printf("*");
        }
        
        printf("\n");
    }
}