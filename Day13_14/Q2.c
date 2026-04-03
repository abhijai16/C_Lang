#include<stdio.h>

int main(){
    int m, n;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d", &m);

    printf("Enter no of columns of 1st matrix: ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter the elements of 1st matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int p, q;
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d", &p);

    printf("Enter no of columns of 2nd matrix: ");
    scanf("%d", &q);

    int b[p][q];

    printf("Enter the elements of 2nd matrix: \n");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d", &b[i][j]);
        }
    }
    if(m!=p || n!=q){
        printf("The summation of both matrix is not possible!!\n");
        return 1;
    }

    int res[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            res[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}