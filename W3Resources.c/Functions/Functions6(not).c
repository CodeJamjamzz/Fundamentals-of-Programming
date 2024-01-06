#include <stdio.h>

int main (){
    int num, rem, i, bi[7];

    printf("Input Decimal Number: ");
    scanf("%d", &num);

     i = 0;

    while (i < 8){
        rem = num % 2;

        if (rem > 0){
            bi[i] += 1;
        } else {
            bi[i] += 0;
        }

        num /= 2;
        i++;
    }

    for(int j = 7; j > 0; j--){
        printf("%d", bi[j]);
    }

    return 0;
}