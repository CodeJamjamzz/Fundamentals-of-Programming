#include <stdio.h> 

int main (void){

    char name[20];
    int num, i = 0;

    printf("Enter number:");
    scanf("%d", &num);

    printf("Enter name: ");
    gets(name);

    while (i < num){
        printf("%s", name);
        i++;
    }
}