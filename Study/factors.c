#include <stdio.h>

int main ()
{
    int number, answer;

    printf("Number: ");
    scanf("%d", &number);

    for(int i = 1; i < number; i++)
    {
        answer = number / i;

            /*if (answer%1 == 0)
            {
                printf("Factor: %d\n", answer);
            } */

            if (answer%i == 0)
            {
                printf("Factor: %d\n", i); //mas nice ni siya 
            } 
             else if (answer == answer)
            {
                printf("Factor: 1\n");
            } 
            else
            {
                return 0;
            }
    }
}