#include <stdio.h>

int main (){

    int num, seq, exponent = 1, total;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a number: ");
    scanf("%d", &seq);

    num = exponent;

    for (int i = 1; i <= seq; i++){
        if (i % 2 != 0){
            for ( int balik = 1; balik < i; balik++){
                exponent *= num;
            }
            num += exponent;
            num *= -1;
            printf("%d\n", &num);
        } else {
            for ( int balik = 1; balik < i; balik++){
                exponent *= num;
            }
            num += exponent;
            printf("%d\n", &num);
        }
    total += num;
        
    }

    printf("The sum = %d", total);
}