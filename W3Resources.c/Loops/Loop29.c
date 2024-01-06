#include <stdio.h>

int main (){

    int number, remainder = 0, times = 0, sum = 0, i, a, temp, r;

    printf("Enter a Number: ");
    scanf("%d", &number);
    
    for(i = number; number != 0; number = number / 10){
        remainder = number % 10;
        // sum = sum + (remainder * remainder * remainder);
        times++;
    }

    for(a = number; number != 0; number = number / 10){
        remainder = number % 10;
        // sum = sum + (remainder * remainder * remainder);
            if (remainder != 0){
                for (int temp = 0; temp < times; temp++){
                    r *= remainder;
                }
                sum = sum + remainder;
            }
    }

    if (sum == a){
        printf("It is an Armstrong number");
    } else {
        printf("It is not an Armstrong number");
    }
}