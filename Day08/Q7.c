#include<stdio.h>

int main(){
    int n, temp, factorial, digit, sum = 0;

    printf("n = ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0){
        digit = temp % 10;

        factorial = 1;

        for(int i = digit; i > 0; i--){
            factorial = factorial * i;
        }

        sum = sum + factorial;

        temp = temp / 10;
    }

    if(n == sum)
        printf("The given number is Strong.\n");
    else
        printf("The given number is not Strong.\n");

    return 0;
}