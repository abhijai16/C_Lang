#include<stdio.h>

int main(){
    int n, sum = 0;
    float avg;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    avg = sum / (n*1.0);

    printf("Average of the numbers stored in array = %.2f\n", avg);

    return 0;
}