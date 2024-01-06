#include <stdio.h>

void prime (int number);

int main ()
{
    int number;

    printf("Number: ");
    scanf("%d", &number);

    prime(number);
}

void prime (int number){

    int total;

    for (int i = 2; i < number; i++)
        {
            total = number % i;
            if (total == 0)
            {
                break;
            }
        
    }

        if (total != 0)
        {
            printf("Prime");
        }
        else 
        {
            printf("Dili");
        }
}
