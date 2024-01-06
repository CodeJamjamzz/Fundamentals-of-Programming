#include <stdio.h>

int main (){

    int year;

    printf("Enter leap year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0){
        printf("It is a leap year");
    } else {
        if (year % 4 == 0 && year % 100 != 0) { 
            printf("It is a Leap Year");
        } else if (year % 100 == 0 && year % 400 != 0) {
            printf("It is not a Leap Year");
        }
    }
} 