#include <stdio.h>

int theTotal (int end);

int main ()
{
    int sum, Total = 0;

    sum = theTotal(10);
    printf("Total: %d", sum);
}

int theTotal(int end)
{
    if (end > 0){
        return end + theTotal(end - 1);
    }
    else {
        return 0;
    }
}