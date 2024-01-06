#include <stdio.h>

int main (){
    int end;

    printf("Enter number: ");   
    scanf("%d", &end);

    for(int height = 1; height <= end; height++){
        for (int width = 1; width <= end*2; width++){
            if (height > end/2){
                printf("*");
            } else {
                printf(" ");
            }
        }

        for(int triangle = 1; triangle <= height; triangle++){
            printf("*");
        }

        printf("\n");
    }

    for(int height2 = 1; height2 <= end-1; height2++){
        for(int width2 = 1; width2 <= end*2; width2++){
            if (height2 <= end/2){
                printf("*");
            } else {
                printf(" ");
            }
        }

    for(int triangle = end; triangle >= height2+1; triangle--){
        printf("*");
    }

        printf("\n");
    }
}