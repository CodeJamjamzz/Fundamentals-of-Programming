#include <stdio.h>

int main ()
{
    int height, row, column;

    printf("Height: ");
    scanf("%d", &height);

    for(row = 0; row < height; row++)
    {
        for(int space = 0; space < height - (row - 1); space++)
        {
            printf("_");
        } 
        for(column = 0; column <= row; column++)
        {
            printf("*");
        }
        printf("\n");
    }
}