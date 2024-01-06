#include <stdio.h>

int getAvg(int a, int b, int c);
int main(){
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    getAvg(num1, num2, num3);

    return 0;
    }
    
    int getAvg(int a, int b, int c){
        int avg = (a + b + c);
        avg /= 3;
        printf("Average: %d", avg);
        return avg;
    }
