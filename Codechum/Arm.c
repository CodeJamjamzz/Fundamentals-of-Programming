#include <stdio.h>
#include <math.h>

int main (){
    int num, digit = 0, num2 = 0, rem, sum = 0, num3 = 0; 

    printf("Enter num: ");
    scanf("%d", &num);

    num2 += num;
    while(num != 0){
        digit++;
        num /= 10;
    }

    num3 += num2;
    while (num2 != 0){
        rem *= 0;
        rem = num2 % 10;
        sum += pow(rem, digit);
        printf("%d\n", sum);
        num2 /= 10;
    }
    printf("%d\n", sum);

    if(num3 == sum){
        printf("%d is an Armstrong number", num3);
    } else {
        printf("%d is not an Armstrong number", num3);
    }
}