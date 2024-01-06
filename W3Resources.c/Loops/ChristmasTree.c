#include <stdio.h>

void UpperTree (int end);

int main (){

int end;

printf("Enter A number: ");
scanf("%d", &end);

UpperTree (end);

}

void UpperTree (int end){
    for(int column = 1; column <= end; column++){
        //Space
        for(int space = end+1; space > column; space--){
            printf(" ");
        }

        for(int leaves = 1; leaves <= column; leaves++){
            printf("* ");
        }
        printf("\n");
    }
    //Leaves
    for(int column2 = 1; column2 <= end; column2++){
        //Space
        for(int space2 = end; space2 > column2; space2--){
            printf(" ");
        }

        for(int leaves2 = 1; leaves2 <= column2+1; leaves2++){
            printf("* ");
        }
        printf("\n");
    }

    //Stem
    for(int stem = 1; stem <= end-1; stem++){
        //space
        for(int space3 = 1; space3 <= end-1; space3++){
            printf(" ");
        }
        //stem2
        for(int stem2 = 1; stem2 <= 2; stem2++){
            printf("* ");
        }
        printf("\n");
    }
}
