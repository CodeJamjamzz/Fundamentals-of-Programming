#include<stdio.h>

int main(){
    int row;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    for(int height = 1; height <= row; height++){
        for(int space = 1; space <= height; space++){
            printf(" ");
        }

        for(int star = row; star >= height; star--){
            if (star == row || star == height || height == 1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    for(int height2 = 1; height2 <= row; height2++){
        for(int star2 = row; star2 >= height2; star2--){
            if (star2 == row||height2 == 1 || star2 == height2 ){
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}

