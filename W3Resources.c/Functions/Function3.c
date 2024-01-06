#include <stdio.h>

void swap(int num1, int num2);

int main (){

    int num1 , num2;

    printf("Enter two Numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping: n1 = %d, n2 = %d", num1, num2);
    swap(num1, num2);   

    return 0;
}

    void swap(int num1, int num2){
        int random;

        random = num1;
        num1 = num2;
        num2 = random;

        printf("\nAfter swapping: n1 = %d, n2 = %d", num1, num2);
    } 