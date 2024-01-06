#include <stdio.h>

int main (void){

    int width, height;

    printf("Enter Width and Hieght: ");
    scanf("%d %d", &width, &height);

    for(int row = 0; row < height; row++){
        for (int space = 0; space < row+1; space++){
            printf(" ");
        }
        
        if (row == 0 || row == height - 1){
        for (int star = 0; star < width; star++){
             printf("* ");
           }
        } else {
           printf("* ");
           for(int space = 0; space < (width-2); space++){
            printf("  ");
           }
           printf("*");
        }
        printf("\n");
    }
    
}