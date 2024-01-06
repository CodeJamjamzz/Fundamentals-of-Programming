#include <stdio.h>

int main ()
{
    int number, n, total = 1;

    printf("Number: ");
    scanf("%d", &number);

    for(n = 1; n <= number; n++)
    {
        total = total * n;
    }

    printf("Total: %d", total);
}