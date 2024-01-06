#include <stdio.h>

int main (){
    int n;
    int end, years = 0;

    do{
    printf("Start size: ");
    scanf("%d", &n);
    } while (n < 9);

    do{
    printf("End size: ");
    scanf("%d", &end);
    } while (end < n);

    for(int i = n; n < end; i++){
        years++;
        n = n + (n / 3) - (n / 4);
    }

    printf("Years: %d", years);
}