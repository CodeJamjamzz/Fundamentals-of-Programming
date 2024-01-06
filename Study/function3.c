#include <stdio.h>

int Total(int discount, int price);

int main()
{
    float price, discount, total, discounted;

    printf("Enter a price: ");
    scanf("%f", &price);

    printf("Enter number of Discount: ");
     scanf("%f", &discount);

    discounted = Total(discount , price);
    total = price - discounted;

    printf("Dicounted Price: Php%10.2f", total);
}

int Total(int discount, int price){
    discount = price * discount / 100;
}