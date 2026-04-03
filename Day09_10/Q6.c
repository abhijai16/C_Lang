#include<stdio.h>

int main(){
    int n, a = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        a = a * 2 + 1;
        printf("%d ", a);
    }

    return 0;
}