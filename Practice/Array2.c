#include <stdio.h>

int main ()
{
      int end, num[100], total = 0;
    printf("Enter a number: ");
    scanf("%d", &end);

    for(int i = 1; i <= end; i++){
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }

        for(int i = 1; i <= end; i++){
            total += num[i];
        }
    
      printf("Sum of all elements stored in the array is : %d", total);
}