#include<stdio.h>

int main(){
    int n, sum = 0;

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

    printf("Sum of the numbers stored in array: %d\n", sum);

    return 0;

}