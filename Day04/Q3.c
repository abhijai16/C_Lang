#include<stdio.h>

int main(){
    int num, firstDigit, sixthDigit, sum;

    printf("Enter the number: ");
    scanf("%d", &num);

    firstDigit = num / 100000;
    sixthDigit = num % 10;
    sum = firstDigit + sixthDigit;

    printf("Sum of digits is: %d.\n", sum);

    return 0;
}