#include<stdio.h>

int main(){
    int n, found = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input 5 elements in the array: \n");

    for(int i = 0; i < n; i++){
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                found++;
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", found);
2
    return 0;
}