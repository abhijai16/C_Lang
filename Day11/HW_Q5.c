#include<stdio.h>

int main(){
    int n, position;

    printf("Input the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements in the array in ascending order: \n", n);

    for(int i = 0; i < n; i++){
        printf("element-%d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the position where to delete: ");
    scanf("%d", &position);

    for(int i = position-1; i < n; i++){
        arr[i] = arr[i+1];
    }

    n--;
    printf("The new list is: ");

    for(int i = 0; i < n; i++ ){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}