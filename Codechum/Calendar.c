#include <stdio.h>

int main (){
    int month, day = 1, column2 = 0; 

    printf("Enter month(1-12): ");
    scanf("%d", &month);

    switch(month){
        case 1:

        printf("\tJanuary\n");
        printf("--------------------------\n");

        for(int row = 1; row <= 5; row++){
            for(int column = 1; column <= 7; column++){


                if (day == 1){
                    printf("    %3d ", day);
                    column2++;
                } else if (day == 6){
                    column2 *= 0;
                    printf("%3d\n", day);
                    
                } else if (column2 == 6){
                    column2 *= 0;
                    printf("%3d\n", day);
                } else {
                    printf("%3d ", day);
                    column2++;
                }

                if(day == 31){
                    break;
                } else {
                     day++;
                }

               
            }

        }
    }
}