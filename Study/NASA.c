#include <stdio.h>

int main()
{
    int percent, option;
    int a;
    int sum;


    printf("Press 1>> ");
    scanf("%d", &option);

    if (option==1)
    {
        percent = 0;

            while(percent < 110){
                printf("\nSTART: %d%%", percent);
                percent = percent + 10;
            }
    }
    else 
    {
        printf("ambot nimo oyyy");
    }
}