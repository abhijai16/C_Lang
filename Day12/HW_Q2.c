//Boyr's Moore Voting Algorithm.
#include<stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int element;
    int count;

    for(int i = 0; i < n; i++){

        if(count == 0){
            element = arr[i];
            count = 1;
        }
    
        if(arr[i] == element){
            count++;
        }

        else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            count++;
        }
    }

    if(count > n/2)
        printf("Majority element: %d\n", element);

    else
        printf("No majority element\n");

    return 0;
}