#include<stdio.h>

void rotate_arr(int array[], int a, int b){
    int temp;
    while(a<b){
        temp = array[b];
        array[b] = array[a];
        array[a] = temp;
        a++, b--;
    }
}

int main(){
    int n, d;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter d to rotate the array: ");
    scanf("%d", &d);

    rotate_arr(arr, 0, d-1);
    rotate_arr(arr, d, n-1);
    rotate_arr(arr, 0, n-1);

    printf("Output: \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}