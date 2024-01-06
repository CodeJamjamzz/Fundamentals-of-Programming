#include <stdio.h>

int main (void){

    int height, width, column;
    printf("Enter hieght & width: ");
    scanf("%d %d", &height, &width);

    for(int tip = 0; tip <= (width/2)+1; tip++){
        if (tip == (width/2)+1){
            printf("*\n");
        } else {
            printf(" ");
        }
    }

    for(int row = 0; row < height; row++){
            if (row == height - 1){
                printf("**");
            }else if (row != height){
                printf(" ");
            }
                for(column = 0; column < width; column++){
                    printf("*");
                }
    printf("\n");
    }
}


