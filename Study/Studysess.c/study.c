#include <stdio.h> 

int main (){

    int grade;

    printf("Enter Grade: ");
    scanf("%d", &grade);

    if (grade > 90 && grade < 100){
    printf("Rank: Pass, First Place");        
    } else if (grade >= 80 && grade < 90){
    printf("Rank: Pass, Second Place"); 
    } else if (grade >= 75 && grade < 80){
    printf("Rank: Pass"); 
    } else {
    printf("Rank: Fail");   
    }
    printf("\n\n\n");

    return 0;
}