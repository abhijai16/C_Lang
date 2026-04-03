#include<stdio.h>

int main(){
    int buyingPrice, markerPrice, discount;
    float price, percentage;

    printf("Enter the buying price: ");
    scanf("%d", &buyingPrice);

    printf("Enter the marker price: ");
    scanf("%d", &markerPrice);

    printf("Enter the discount: ");
    scanf("%d", &discount);

    price = markerPrice - (markerPrice * discount)/100.0;

    if(price > buyingPrice){
        percentage = ((price/buyingPrice) * 100) - 100;
        printf("Seller made a profit of %.2f%%.\n", percentage);
    }

    if(price < buyingPrice){
        percentage = 100 - ((price/buyingPrice) * 100);
        printf("Seller made a loss of %.2f%%.\n", percentage);
    }
    return 0;
}
