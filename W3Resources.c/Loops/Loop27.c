#include <stdio.h>

int main (){

    int number, total = 0, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("The positive Divisor: ");

    for(int i = 1; i < number; i++){
        if (number % i == 0){
            printf("%d ", i);
            sum += i;

        }
    }

    printf("\nThe sum of the divisor is : %d", sum);
    return 0;
}