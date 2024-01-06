#include <stdio.h> 

int main (){

    for (int row = 1; row <= 5; row++){
        for (int column = 1; column <= row; column++){
            
            if (row % 2 == 0){
                if (column % 2 != 0){
                    printf("0");
                } else {
                    printf("1");
                }
            } else {
                if (column % 2 == 0){
                    printf("0");
                } else {
                    printf("1");
                }
            }

            if( column == row){
                printf("\n");
                break;
                } 
            }
        }
    }


