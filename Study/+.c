#include <stdio.h>

int factorial(int number);

int main ()
{
    int number;

    printf("Number: ");
    scanf("%d", &number);

printf("Factorial is %d", factorial(number));

}

int factorial(int number) // decalration, name, call/unsa iya e take in na values
{
    int i, total = 0;      /*since kani na mga values kay makita raman diri sa loop dapat
                             diri rajud na function naa ni hehe */

        for(i = 1; i <= number; i++)
    {
        total = total + i;
    }
    return total;
}