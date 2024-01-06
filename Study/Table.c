#include <stdio.h>

int main ()
{
    const int number; 
    int n;

    printf("Number: ");
    scanf("%d", &number);

    for (n = 0; n < 11; n++)
    {
        printf("%d x %d = %d\n", number, n, number* n);
    }

}