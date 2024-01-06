#include <stdio.h>

int main ()
{
    int end;
    char array[100];

    printf("End: ");
    scanf("%d", &end);

    for (int row = 0; row < end; row++){
            for(int space = end; space > row; space--){
                printf(" ");
            }
            for(int a = 1; a <= row+1; a++){
                for(int b = a; b <= row+1; b++)
                array[a] = b;
                printf("%d ", array[a]);
            }
        printf("\n");
    }
}

