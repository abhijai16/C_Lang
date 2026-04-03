#include<stdio.h>

int main(){

    int n;
    float x;
    float power = 1, factorial = 1;

    printf("Enter the value of x and n: ");
    scanf("%f %d", &x, &n);

    for(int i = 1; i <= n; i++){
        power = power * x;
        factorial = factorial * i;
    }

    printf("The value is %.2f\n", power / factorial);

    return 0;
}