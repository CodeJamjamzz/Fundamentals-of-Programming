#include <stdio.h>

int main (){
    int num, num2[10];

    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 10){
        num = 10;
    }

    for(int i = 0; i < num; i++){
        printf("Number %d: ", i);
        scanf("%d", &num2[i]);
    }

    for(int j = num2[10] - 1; j >= 0; j--){
        printf("%d ", num2[j]);
    }
}