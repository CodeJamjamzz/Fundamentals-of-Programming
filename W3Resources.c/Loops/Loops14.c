#include <stdio.h>

int main (){

    for (int row = 1; row <= 4; row++){
        for (int column = 4; column > row; column--){
            printf(" ");
        }
    
        for (int i = 0; i < row; i++){
                
                printf("* ");
                }
            printf("\n");
    }
    return 0;
}