#include <stdio.h>

int main (void){

    int height, width;

    printf("Enter Height & Width: ");
    scanf("%d %d", &height, &width);

    for(int row = 0; row < height; row++){
        if (row == 0 || row == height- 1){
            for(int column = 0; column < width; column++){
            printf("* ");
            } 
        }else {
            printf("*");
            for(int space = 0; space < (width*2)-3; space++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}
