#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = sum + pow(i, 0.5);
    }

    printf("The sum of series is %f.", sum);

    return 0;
}