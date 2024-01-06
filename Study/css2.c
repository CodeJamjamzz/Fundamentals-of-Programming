#include <stdio.h>

//create a program to get the remainder of 2 numbers and display
// whether it is odd or even
int main ()
{
    int num1, num2; //akoa ning answer sa act

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number: ");
    scanf("%d", &num2);

    if(num1 %2 == 0 && num2 %2 == 0){
        printf("both are Even");
    }
    else if (num1 %2 != 0 && num2 %2 == 0){
        printf("1st Number is odd and 2nd Number is even");
    }
    else if (num1 %2 == 0 && num2 %2 != 0){
        printf("1st Number is even and 2nd Number is odd");
    }
    else {
        printf("");
    }
    return 0;
}