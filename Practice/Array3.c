#include <stdio.h>
#include<string.h>

int main ()
{
    int num[100], end, number, csr = 0;

    printf("Enter a number: ");
    scanf("%d", &end);

    for(int i = 0; i < end; i++){
        printf("Element %d : ", i);
        scanf("%d", &num[i]);
    }

    for(int a = 1; a <= end; a++){
        for(int b = a + 1; b < end; b++){
            if (num[a] == num[b]){  // atay jud ka 
                csr++;
                break;
            }
        }
    }
    
    printf("Total number of duplicate elements found in the array: %d\n", csr);
    return 0;
}