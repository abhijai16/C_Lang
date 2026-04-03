#include<stdio.h>

int main(){
    int num, temp, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
    while(temp != 0){
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }
    if(num == sum){
        printf("The given number is Armstrong.\n");
    }
    else printf("The given number is not Armstrong.\n");

    return 0;
}