#include <stdio.h>
int main(){
    int row, star, space;
    for(row = 1; row <= 9; row++){
        // for(space = 9; space >= row; space--){
        //     printf(" ");
        // }
        for(star = 9; star >= row; star--){
            if (star == row){
                printf("*");
            } else if (star == 9){
                printf("*");
            } else if (row == 1){
                printf("*");
            } else {
                printf(" ");
            }

            // printf("*");
        }
        printf("\n");
    }
    return 0;
}