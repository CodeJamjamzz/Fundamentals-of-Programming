#include <stdio.h> //library printf, scanf... display and input 

// create a program to add 2 numbers and display their sum
int main ()
{
    int x, y; //variables

    printf("Enter number: "); //(normal display) semi colon every statement
    scanf("%d %d", &x, &y); // scanning of numbers = & is to point to the address of the variable
                    // %d - int && %f - float && %c - char && %lf doubles

    printf("Sum: %d", x + y);
    return 0;
}