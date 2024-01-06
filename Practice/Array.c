#include <stdio.h>

int main ()
{
    int end, num[100];
    printf("Enter a number: ");
    scanf("%d", &end);

    for(int i = 1; i <= end; i++){
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }

        printf("Elements in array are: ");
        for(int i = end; i > 0; i--){
            printf("%d ", num[i]);
        }
}