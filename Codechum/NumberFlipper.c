#include <stdio.h>

void reverseInt(int x);

int main (){
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    reverseInt(num);
}

void reverseInt(int x){
    int rem, sum = 0;

    do {
        
    rem = x % 10;
    sum = (sum * 10) + rem;
    x = x / 10;
    } while (x != 0);

    printf("%d", sum);
}