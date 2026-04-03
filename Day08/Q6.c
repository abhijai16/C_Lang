#include<stdio.h>

int main(){
    int n, factorial = 1;

    printf("n = ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        factorial = factorial * i;
    }
    printf("Factorial is %d.\n", factorial);

    return 0;
}