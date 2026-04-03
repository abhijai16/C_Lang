#include<stdio.h>

int main(){
    int n, num, index, found = 0;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array of %d size: ", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements to be searched: ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++){
        if(arr[i]==num){
            found++;
            index = i+1;
        }
    }
    if(found) printf("Number found at the location = %d\n", index);

    else printf("Number not found.\n");

    return 0;
}