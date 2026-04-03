#include<stdio.h>

int main(){
    int n, sum, S = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = 0;
        for(int j = i; j > 0; j--){
            sum = sum + j;
        }
        S = S + sum;
    }
    printf("%d\n", S);

    return 0;
}