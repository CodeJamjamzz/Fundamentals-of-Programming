#include <stdio.h>
 //create a program to calculat eand display the student's tuition fee
 // knowint that the MISC is 500 and the base tuition is 200 per units

 int main ()
 {
    float units, mf = 500, bt = 200; //float kay money man 

    printf("Units: ");
    scanf("%f", &units);

    printf("Tuition: Php %.2f", (bt * units) + mf);

    return 0; 

    //Unary Operators - + * / % ++ --
    // num++ || ++num == add 1;
    // --num || num-- == minus 1;
      
    // for loop - overall condition in one line -(i= 0;i<10;i++);
    // while loop - condition first
    // do-while loop - action the condition 
}
 