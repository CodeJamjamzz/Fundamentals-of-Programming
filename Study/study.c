#include <stdio.h>
#include <string.h>

int main ()
{
    int decimal, binary,remainder, q, answer, number;
    char str1 = '1', str2 = '0', str3[20] = "Answer: ";

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

  for (int i = 0; i < 4; i++){
      binary = decimal % 2;
      if (binary > 0){
        remainder= 0 + 1;
      }else {
         remainder = 0 + 0;
      }
      decimal /= 2;
  }

  printf("%d", remainder);

/*q = remainder;

    while (q!=0)
    {
    number = q%10;
    answer = (answer*10) + number;
    q = q/10; 
    }

    printf("%d", answer); */

  return 0;
}