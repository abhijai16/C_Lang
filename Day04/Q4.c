#include<stdio.h>

int main(){
    int num, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 0; i < 3 ; i++){
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits is: %d.\n", sum);

    return 0;
}