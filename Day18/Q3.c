#include<stdio.h>

int sum(int num){
    if(num < 10)
        return num;

    int s = 0;
    while(num > 0){
        s += num % 10;
        num /= 10;
    }
    return sum(s);
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of the digits (upto single digit) of %d is %d.\n", num, sum(num));

    return 0;
}