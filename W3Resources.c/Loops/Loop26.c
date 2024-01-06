#include <stdio.h>

int main (){

    int num = 1, seq, plus = 1, total = 1;

    printf("Enter number of Terms: ");
    scanf("%d", &seq);

    for (int i = 1; i <= seq; i++){

        printf("%d", num);

        if (i < seq){
            printf("+");
        }

        num = (num * 10) + 1;
        total += num;
    }
        printf("\n%d", total);

}