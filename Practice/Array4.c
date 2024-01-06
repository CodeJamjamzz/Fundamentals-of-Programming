#include <stdio.h>
#include <math.h>

void squared(int array[], int i);

int main (){
    int num, array[20], row = 0, i = 0;

    printf("Enter number of integers: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    squared(array, num);

    // for (int print = 0; print < num; print++){
    //     printf("%d ", array[print]);

    //     if (row < 4 ){
    //         row++;
    //     } else {
    //         row = 0;
    //         printf("\n");
    //     }
    // }
}

void squared(int array[], int i){

        int row = 0;

        for (int print = 0; print < i; print++){
        printf("%3d ", array[print]*array[print]);

        if (row < 4 ){
            row++;
        } else {
            row = 0;
            printf("\n");
        }
    }
}