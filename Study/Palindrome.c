#include <stdio.h>

int main ()
{
    int number, remainder,q, answer = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    q = number;

    while (q!=0)
    {
    remainder = q%10; //12.1
    answer = (answer*10) + remainder;
    q = q/10;  //12
    }

    if (answer == number)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}