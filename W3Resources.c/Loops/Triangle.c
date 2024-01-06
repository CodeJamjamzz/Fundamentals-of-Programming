#include <stdio.h>

int main (){
    int end;

    printf("Enter a number: ");
    scanf("%d", &end);

    for(int height = 1; height <= end; height++){
        for(int space = end; space >= height; space--){
            printf("_");
        }

        for(int star = 1; star <= height; star++){
            if (star == 1 || star == height || height == end){
                printf("*");
            } else {
                printf("_");
            }
        }

        printf("\n");
    }

    int height2 = 1;

    while(height2 <= end){

        int space = end;
        while(space>=height2){
            printf("_");
            space--;
        }

        int star = 1;

        while(star <= height2){
            if (star == 1 || star == height2 || height2 == end){
                printf("*");
            } else {
                printf("_");
            }

            star++;
        }

        height2++;
        printf("\n");
    }



}