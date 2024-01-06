#include <stdio.h>

int main (){
    
    int num, rem, times =0, sum = 0, b;

    printf("Enter a Number: ");
    scanf("%d", &num);

        for(int i = 1; i <= num; i++){
            for(int a = i; i != 0; i /= 10){
                rem = i % 10;
                times++;
            }
            
            for(int b = 0; b < times; b++){
                rem *= rem;
                sum = sum + rem;
            }

            if(sum == i){
                printf("%d", i);
                times = 0;
                continue;
            } else {
                times = 0;
                continue;
            }
        
        }
}