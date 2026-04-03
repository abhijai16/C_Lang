#include<stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of digits of %d is ", num);

    while(num != 0){
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf("%d.\n", sum);

    return 0;
}