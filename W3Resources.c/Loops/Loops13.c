#include <stdio.h>

int main (){

    int number = 0;

    for (int row = 1; row <= 4; row++){
        for (int column = 4; column > row; column--){
            printf(" ");
        }
    
        for (int i = 0; i < row; i++){
                number += 1;
                printf("%d ", number);
                }
            printf("\n");
    }
    return 0;
}