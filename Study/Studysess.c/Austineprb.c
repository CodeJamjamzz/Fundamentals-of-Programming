#include <stdio.h>
#include <windows.h>
#include <conio.h>
//#include "gotoxy.h" // self made library 

COORD coord = {0,0};
void gotoxy (int x, int y){
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (void){
      float num[100], total = 0, cash, change;
      int i =0, j = 0, a = 1, b = 7;

gotoxy(15,3);printf("Jamiel Gwapo Store\n");
gotoxy(1,4);printf("-------------------------------------------");
gotoxy(1,5);printf("List of items:");
gotoxy(37,5);printf("Prices:");

    for(i = 0; num[i-1] > 0; i++){ 
    gotoxy(1,7+i);printf("Item %d: ", a);
    gotoxy(33,7+i);printf("Php");
    gotoxy(37,7+i);scanf("%f", &num[i]);
    a++;
    }
    // i = 0; 
    //     while (num[i-1] > 0){
    // gotoxy(1,7+i);printf("Item %d: ", a);
    // gotoxy(33,7+i);printf("Php");
    // gotoxy(37,7+i);scanf("%f", &num[i]);
    // a++;
    // i++
    //     }

    for(int j = 0; j < i; j++){
            total += num[j];
        }
    
printf("\n Total: \t\t\t Php %.2f", total); 
printf("\n -------------------------------------------");
printf("\n Cash Received: \t\t Php "); 
scanf("%f", &cash);
printf(" Change: \t\t\t Php %.2f\n\n\n\n", change, change = cash - total); 

    return 0;
}