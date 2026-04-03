#include<stdio.h>

int main(){
    int m,n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n];

    printf("Enter values to the matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if (i == j){
                sum += arr[i][j];
            }
        }
    }
    printf("The sum of diagonal elements are: %d\n", sum);
    
    return 0;
}