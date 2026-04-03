#include<stdio.h>

int main(){
    int n, temp, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        temp = 1;

        for(int j = 1; j <= i; j++){
            temp = temp * i;
        }
        sum = sum + temp;
    }
    printf("The sum of series is %d.\n", sum);

    return 0;
}