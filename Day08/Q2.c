//Perfect Number - A number is said to be Perfect when the sum of factors excluding the number itself is equal to the original number.

#include<stdio.h>

int main(){
    int n, sum = 0;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
    if(n == sum){
        printf("The given number is Perfect.\n");
    }
    else printf("The given number is not Perfect.\n");

}