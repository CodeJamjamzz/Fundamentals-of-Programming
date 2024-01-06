#include <stdio.h>

int reg = 10, perunit = 10, penalty = 50;

int calculatefee(int a, int b, int c);
int unitfee(int a);

int main (){

    int first, second, third;

    printf("Number of Units in the 1st Semester: ");
    scanf("%d", &first);

    printf("Number of Units in the 1st Semester: ");
    scanf("%d", &second);

    printf("Number of Units in the 1st Semester: ");
    scanf("%d", &third);

    int sum = calculatefee(first, second, third);
    printf("%d", sum);
}

int calculatefee(int a, int b, int c){
    return unitfee(a) + unitfee(b) + unitfee(c);
}

int unitfee(int a){
    int per, pen = 0;

    per = perunit * a;

    a -= 12;
    while (a > 0){
        a -= 12;
        pen++;
    }

    a = pen * penalty;

    
    return a + per + reg;
}
