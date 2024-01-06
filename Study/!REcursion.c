#include <stdio.h>

int factorial(int number);

int main ()
{

    int number;

    printf("Number: ");
    scanf("%d", &number); 

    printf("Total: %d", factorial(number));
}
   
    int factorial(int number)
    {
        if (number == 0){
            return 1;
        }
        else {
            return number*factorial(number-1);
        }
    }
