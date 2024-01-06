#include <stdio.h>

int main (){

    int end;

    printf("Input number of rows: ");
    scanf("%d", &end);

    for(int i = 1; i <= end; i++){
        for(int space = end+1; space > i; space--){
            printf(" ");
        } 
                printf("1 ");


        if (i > 2){
                    for(int num3 = 2; num3 < i; num3++){
                        printf("%d ", i-1);
                }
            }

        if (i > 1){
                printf("1 ");
        }
        printf("\n");
    }

    return 0;
}