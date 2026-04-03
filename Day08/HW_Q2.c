#include<stdio.h>

int main(){
    int n, factorial = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        factorial = factorial * i;
    }
    printf("The value of 1/%d! is %f.\n", n, 1.0/factorial);

    return 0;
}