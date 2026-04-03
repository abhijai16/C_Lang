#include<stdio.h>

int main(){
    int n, temp;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the %d numbers: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++ ){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("The numbers in ascending order are \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}