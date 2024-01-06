#include <stdio.h>

int main ()
{
    int num1, num2, num3;

    printf("Number 1: \n");
    scanf("%d", &num1);

    printf("Number 2: \n");
    scanf("%d", &num2);

    if (num1 >= num2)
    {
        num3 = num1 - num2;
        printf("Answer: %d", num3);
    }
    else 
    {
        num3 = num2 - num1;
        printf("Answer: %d", num3);
    }
}