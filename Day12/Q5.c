#include<stdio.h>

int main(){
    int n, sum;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter sum = ");
    scanf("%d", &sum);

    int current_sum = 0;
    int start = 0;
    int found = 0;

    for(int end = 0; end<n; end++){
        current_sum += arr[end];

        while(current_sum>sum && start<=end){
            current_sum -= arr[start];
            start++;
        }

        if(current_sum==sum){
            printf("Sum found between and including indices %d and %d.\n", start, end);
            found++;
        }
    }
    if(found = 0) printf("No subarray found for the sum.\n");

    return 0;
}