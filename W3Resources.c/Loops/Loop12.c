#include <stdio.h>

int main (){

    int number = 0;

    for (int row = 1; row <= 4; row++){
        for (int column = 0; column < row; column++){
            number += 1;
            printf("%d ", number);
        }
        printf("\n");
    }
}