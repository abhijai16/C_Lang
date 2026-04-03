#include<stdio.h>

int main(){
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter these Array Elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int i = 0, j = n-1, temp;
    while(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("Elements in reverse order in the array: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}