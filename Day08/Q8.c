#include<stdio.h>

int main(){
    int n, sum = 0, a = 0, b = 1, c = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n >= 1) printf("%d ", a);

    if(n >= 2) printf("%d ", b);

    if(n >= 3) printf("%d ", c);

    for(int i = 0; i < n - 3; i++ ){
        sum = a + b + c;
        printf("%d ", sum);
        a = b;
        b = c;
        c = sum;
    }
    printf("\n");

    return 0;
}