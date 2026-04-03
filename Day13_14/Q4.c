#include<stdio.h>

int main(){
    int m, n;
    printf("Enter no of rows of matrix: ");
    scanf("%d", &m);

    printf("Enter no of columns of matrix: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                sum = sum + a[i][j];
            }
        }
    }
    printf("Sum of upper triangular matrix = %d.\n", sum);
    return 0;
}