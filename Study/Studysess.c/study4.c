#include <stdio.h>
#include <string.h>


int main (){

    int num, i = 1;

    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num > 1){
        printf("great");
        }  else if (num == 0){
        printf("stop");
        }
        else {
         while (i > 0){
        printf("Enter number: ");
        scanf("%d", &num);
        i++;
        break;
        }
        }    
    }



