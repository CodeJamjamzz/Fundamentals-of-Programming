#include <stdio.h>

int main ()
{
    int num, row, star, space;

    printf("Enter an odd number: ");
    scanf("%d", &num);

    for (row = 1; row <= num;row+=2)
    {
        printf("\n");
        for (space = 1; space <= (num - row)/2; space++)
        {
            printf("_");
        }
        for (star = 1; star <= row; star++)
        {
            printf("*");
        }
    }

    for(row = num - 2; row >= 1; row-=2)
    {
        printf("\n");
        for(space = 1; space <= (num - row)/2; space++)
        {
            printf("_");
        }
        for (star = 1; star <= row; star++)
        {
            printf("*");  
        } 
    }
}