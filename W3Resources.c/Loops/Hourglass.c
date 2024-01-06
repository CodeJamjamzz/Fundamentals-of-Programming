#include <stdio.h>

int main (){
    int row;

    printf("Enter a number: ");
    scanf("%d", &row);

    for(int column = 1; column <= row; column++){
        for(int space = 1; space <= column; space++){
            printf(" ");
        }

        for(int star = (row*2); star >= column*2; star--){
            switch (column) {
                case 1:
                printf("A");
                break;
                case 2:
                printf("D");
                break;
                case 3:
                printf("C");
                break;
                case 4:
                printf("B");
                break;
                case 5:
                printf("A");
                break;
            default:
                printf("F");
            }
        }

        printf("\n");
    }

    for(int column2 = 1; column2 <= row; column2++){
        for(int space2 = row; space2 >= column2; space2--){
            printf(" ");
        }
        for(int star = 1; star <= (column2*2)-1; star++){
            switch (column2) {
                case 1:
                printf("A");
                break;
                case 2:
                printf("B");
                break;
                case 3:
                printf("C");
                break;
                case 4:
                printf("D");
                break;
                case 5:
                printf("E");
                break;
            default:
                printf("F");
            }
        }

        printf("\n");
    }
}