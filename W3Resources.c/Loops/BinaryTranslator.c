#include <stdio.h>

void binarytranslator(int x);

int main(){
    int decimal;
    printf("Enter a decimal: ");
    scanf("%d", &decimal);

    binarytranslator(decimal);
}

void binarytranslator(int x){
    int bit[8], i = 0, remainder;
    while(x/=2 != 0){
        remainder = x%2;
        if (remainder > 0){
            bit[i] = 1;
        }
        else{
            bit[i] = 0;
        }
        printf("%d", bit[i]);
        x /= 2;
        i++;
    }
    printf("\n%d\n", i);
    while(i >= 1){
        printf("%d", bit[i-1]);
        i--;
    }
}