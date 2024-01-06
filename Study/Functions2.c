#include <stdio.h>

int theTotal (int end, int Total);

int main ()
{
    int sum, end, Total = 0;

    printf("end: "); 
    scanf("%d", &end);

    sum = theTotal(end, Total);
    printf("Total: %d", sum);
}

int theTotal(int end, int Total)
{
    for (int i = 1; i <= end; i++){ //5
        Total = Total + i; // atay jud ka 
    }
    return Total;
}