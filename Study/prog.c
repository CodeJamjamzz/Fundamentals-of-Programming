#include <stdio.h>

int main ()
{
    float price, discount, final_price;

    printf("Enter the price: ");
    scanf("%f", &price);

    if (price > 1500){
    discount = price * 15/100; 
    final_price = price - discount;
    printf("Final price: %.2f", final_price);
    } else {
      final_price = price; 
      printf("Final price: %.2f", final_price); 
    }

}
