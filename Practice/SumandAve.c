#include <stdio.h> 

int main (){

    int end, num[100], total = 0, average;

    printf("Enter a number: ");
    scanf("%d", &end);

    for(int i = 1; i <= end; i++){
        printf("Number %d: ", i);
        scanf("%d", &num[i]);
        total = total + num[i];
    }

    printf("\nSum: %d", total);

    average = total / end;

    printf("\nAverage: %d\n", average);
}