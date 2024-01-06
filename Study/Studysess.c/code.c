#include <stdio.h>
#include <windows.h>
#include <conio.h>

COORD coord = {0,0};
void gotoxy (int x, int y){
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main (){
    char name[20], course[20], ID[20];
    float units, tuition = 1000, ms = 9000, enroll = 1000, health = 2000, total;

gotoxy(30,1);printf("CIT UNIVERSITY");

gotoxy(10,3);printf("Student Name: ");
gotoxy(50,3);printf("Course: ");
gotoxy(13,4);printf("ID Number: ");
gotoxy(44,4);printf("No. of UNITS: ");

gotoxy(24,3);gets(name);
gotoxy(58,3);gets(course);
gotoxy(24,4);gets(ID);
gotoxy(58,4);scanf("%f", &units);

gotoxy(15,6);printf("Tuition: Php %.2f", tuition, tuition *= units);    
gotoxy(13,7);printf("Mis. Fees: Php %.2f", ms);
gotoxy(6,8);printf("Health Insurance: Php %.2f", health);
gotoxy(8,9);printf("Enrollment Fee: Php %.2f", enroll);
gotoxy(23,10);printf("------------");

gotoxy(5,11);printf("Total Tuition Fee: Php %.2f", total, total = tuition + ms + health + enroll);
}