#include <stdio.h>

int main (void){

    int num, end;

    printf("Input the starting range or number : ");
    scanf("%d", &num);

    printf("Input the ending range of number : ");
    scanf("%d", &end);

    for(int i = num; i <= end; i++){
        int sum = 0;
        for(int a = 1; a < i; a++){
            if(i % a == 0){
                sum += a;
            }
        }
         
         if(sum == i){
            printf("%d", i);
            printf("\n"); 
        }
        
    }

    return 0;
}