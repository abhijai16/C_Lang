#include<stdio.h>

int main(){
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(n % i == 0) count++;
    }
    if(count == 2){
        printf("You have entered %d.\n%d is a prime number.\n", n, n);
    }
    else printf("You have entered %d.\n%d is NOT a prime number.\n", n, n);

    return 0;
}