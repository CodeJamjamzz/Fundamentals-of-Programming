#include <stdio.h>

int main(){

    int number = 0;

    printf("Enter positive integer: ");
    scanf("%d", &number);

    if (number <= 0){
        printf("Number must be a positive integer: ");
    } else {
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0){
         printf("%d, ", i);
        }
        }
    } 
    return 0;
}