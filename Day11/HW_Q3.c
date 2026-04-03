#include<stdio.h>

int main(){
    int n, product = 1;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array: \n");

    for(int i = 0; i < n; i++){
        printf("elements-%d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        product = product * arr[i];
    }

    printf("Product of the array elements = %d\n", product);

    return 0;

}