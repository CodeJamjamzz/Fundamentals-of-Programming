#include <stdio.h>

int main ()
{
    int number, times, total = 1;

    printf("Number: ");
    scanf("%d", &number);

    printf("Times: ");
    scanf("%d", &times);

    for (int i = 0; i < times; i++)
    {
        total = total * number;
    }

    printf("Answer: %d", total);
}