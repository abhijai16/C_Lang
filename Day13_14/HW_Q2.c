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

    int traArr[n][m];

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            traArr[j][i] = arr[i][j];
        }
    }
    printf("Transpose of Matrix: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", traArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}