#include <stdio.h>

int main (){
                        
    int end; 

    printf("Enter 5>>>: ");
    scanf("%d", &end);

    for(int row = 0; row < end; row++){
        if (row == 0 || row == end - 1){
            for(int column = 0; column < 5; column++){
                printf("*");
            }
            printf("\n");
        } else if (row == (end/2)){
                printf("* * *");
                printf("\n");
        } else {
            printf("** **");
            printf("\n");
        }
    }
}