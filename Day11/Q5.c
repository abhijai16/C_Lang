#include<stdio.h>

int main(){
    int n, index, num;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &num);

    printf("Enter the location: ");
    scanf("%d", &index);

    for(int i = n; i >= index-1; i--){
        arr[i+1] = arr[i];
    }

    arr[index-1] = num;

    printf("The resultant array: \n");

    n++;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;

}