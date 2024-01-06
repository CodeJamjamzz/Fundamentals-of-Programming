#include <stdio.h>

int main ()
{
    int x,y, rem; //declaration - where variables are declared
     rem = 0; //instantiation practive if the variable will
              // be inputed with a value through a process.

    printf("Enter a number: ");
    scanf("%d %d", &x, &y);

    rem = x % y;

    printf("Remainder: %d\n", rem); //\n - new line 
    if (rem % 2 > 0){
        printf("ODD");
    }
    else {
        printf("EVEN");
    }
    return 0;
}