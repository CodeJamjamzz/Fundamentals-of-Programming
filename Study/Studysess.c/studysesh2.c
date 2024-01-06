#include <stdio.h>

int main ()
{
   
    char string[100];
    //Prtompt
    printf("Enter a Sentence: ");
    //Input
    fgets(string, 100, stdin);

    //Output
    printf("%s", string);

    //Terminate
    return 0;

    //Pseudocode == code into words 
}