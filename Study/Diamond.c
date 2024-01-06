#include <stdio.h>

int main ()
{
    int a,b, number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(a = 1; a <= number; a++)
    {
        printf("\n");
        for(b= 1; b <= (number - a); b++)
        {
            printf(" ");
        }
        for(b= 1; b < a; b++)
        {
            printf("*");
        }
        for(b= 1; b <= a; b++)
        {
            printf("*");
        }
    }

    for(a = 1; a <= number; a++)
    {
        printf("\n");
        for(b= 1; b <= a; b++)
        {
            printf(" ");
        }
        for(b= number; b > a; b--)
        {
            printf("*");
        }
        for(b=1; b < (number - a); b++)
        {
            printf("*");
        }
        
    }
}