#include<stdio.h>

int main(){
    int num, reverse = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    printf("The reverse of %d is ", num);

    while(num != 0){
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    printf("%d.\n", reverse);

    return 0;
}