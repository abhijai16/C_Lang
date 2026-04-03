#include<stdio.h>

int minimum(int x, int y){
    int min = x;
    if(x>y) min = y;
    return min;
}

int gcd(int min, int x, int y){
    if(x % min == 0 && y % min == 0){
        return min;
    }
    return gcd(min-1, x, y);
}

int main(){
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    int min = minimum(num1, num2);

    printf("GCD of %d and %d is %d.\n", num1, num2, gcd(min, num1, num2));

    return 0;
}
