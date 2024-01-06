#include <stdio.h>

int main (){

    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);


    for( int i = 2; i <= num; i++){
        rem = num % i;
        if (num == 2){
            printf("It is prime");
            break;
        }else if (rem != 0){
            if (i == num - 1){
                printf("It is prime");
                break;
            }
        } else {
            printf(" It is not prime");
            break;
        }
    }
}