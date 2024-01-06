#include <stdio.h>

int square(int x);

int main (){
    int num;

    printf("Input any number for square : ");
    scanf("%d", &num);

    float sqr = square(num);

    printf("The square of %d is : %.2f", num, sqr);
    return 0;
}

int square (int x){
    return (x*x);
}