#include<stdio.h>

int factorial(int x){
    if(x == 1 || x == 0) return 1;
    return x*factorial(x-1);
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d.\n", num, factorial(num));

    return 0;
}