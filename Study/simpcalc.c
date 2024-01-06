#include <stdio.h>

int main()
{
    double num1, num2, answer;
    char operator;

    printf("Number 1: "); 
    scanf("%lf", &num1);

    printf("Number 2: "); 
    scanf("%lf", &num2);

    printf("Operation:"); 
    scanf("%c", &operator);
    scanf("%c", &operator); // duhaa lang ni incase makalit siya ka skip huhu  

    switch(operator){
        case '+':
            answer = num1 + num2;
            printf("Answer: %lf", answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("Answer: %lf", answer);
            break;
        case 'x':
            answer = num1 * num2;
            printf("Answer: %lf", answer);
            break;
        case '/':
            answer = num1 / num2;
            printf("Answer: %lf", answer);
            break;
        default:
        printf("atay wala nasad");
    }

}