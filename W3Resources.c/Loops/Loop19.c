#include <stdio.h> 

int main (){

    int number; float total = 0;

    printf("Input a number: ");
    scanf("%d", &number);

    for(int divisor = 1; divisor <= number; divisor++){
        
        if (divisor > 1){
            printf(" + 1/%d", divisor);
        } else if (divisor == 1) {
            printf("1");
        }

        total += (1 / (float) divisor);
    }

    printf("\nSum : %f", total);
}