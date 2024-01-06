#include <stdio.h>

int main (){
    int array[50], num, sum = 0;
    float ave = 0;
    char opertation;

    printf("Number of weeks taking CS50: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
    printf("Week %d HW Hours: ", i);
    scanf("%d", &array[i]);
    }
    
    printf("Enter T for total hours, A for average hours per week: ");
    scanf(" %c", &opertation);

    switch(opertation){
        case 'T':
        for(int i = 0; i < num; i++){
            sum += array[i];
        }
        printf("%d hours", sum);
        break;
        case 'A':
        for(int i = 0; i < num; i++){
            ave += array[i];
        }
        ave /= num;
        printf("%.1f hours", ave);
        break;
    }
}