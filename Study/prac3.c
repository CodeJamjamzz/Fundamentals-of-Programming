#include <stdio.h>

int main()
{

int amount, sum;

printf("Amount: ");
scanf("%d", &amount);

if (amount > 500)
{
    sum = amount * 5/100; // e inani langjud basta percent kaysa if e decimal siya
}
else if (amount > 100) // mas safe if "else if" ang tanan
{
    sum = amount - 100; 
}
else if (amount < 100)
{
    sum = amount - 0;  
}

printf("Amount: %d", sum);    
}