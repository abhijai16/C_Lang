// Euclideab Algorithm for finding GCD
#include<stdio.h>

int gcd(int x, int y){
    if(y == 0){
        return x;
    }
    return gcd(y, x%y);
}

int main(){
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("GCD of %d and %d is %d.\n", num1, num2, gcd(num1, num2));

    return 0;
}