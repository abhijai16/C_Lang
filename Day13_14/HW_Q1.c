#include<stdio.h>

int main(){
    int m,n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n];

    if(m!=n){
        printf("Error! Identity Matrix must have rows and column equal.\n");
        return 1;
    }
    printf("Enter values to the matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int found=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(arr[i][j] != 1) found++;
            }
            else{
                if(arr[i][j] != 0) found++;
            }
        }
    }
    if(found == 0) printf("The given matrix is an Identity Matrix.\n");
    else printf("The given matrix is not an Identity Matrix.\n");

    return 0;
    
}