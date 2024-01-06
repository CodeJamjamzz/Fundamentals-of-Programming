#include <stdio.h>
#include <string.h>

int main (){
    char name[50];
    float num;
    int start, a = 0;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = 0;

    do {
    printf("Enter box size: ");
    scanf("%f", &num);
        if (num < strlen(name)){
            printf("Choose a larger box\n");
        }
    } while (num < strlen(name));

    int num2 = num / 2.0;
    for(int i = 1; i <= num2-1; i++){

        if(i == (num2/2)+1){
            start = (num - strlen(name));
            for(int b = 1; b <= start; b++){
                
                if (b == 1 || b == start){
                    printf("*");
                } else {
                    printf(" ");
                }  
                
                if (b == start/2){
                    printf("%s", name);
                }
            }
            printf("\n");
        }
        
        for(int j = 1; j <= num; j++){
            if(i == 1 || i == num2-1 || j == 1 || j == num){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

        
    }

