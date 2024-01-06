#include <stdio.h>

int square(int number);

int main ()
{
    int number, answer;

    printf("Number: ");
    scanf("%d", &number);

    answer = square(number); 
    printf("Answer: %d", answer);
}

int square(int number){
    int result = number * number;
    return result;
}