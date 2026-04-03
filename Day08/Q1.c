//Fibonacci Series

#include<stdio.h>

int main(){
    int a = 0, b = 1, c, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n >= 1)
        printf("%d ", a);

    if(n >= 2)
        printf("%d ", b);

    for(int i = 0; i < n - 2; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}