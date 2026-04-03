#include<stdio.h>

int main(){
    int row, coloumn;

    printf("Enter no of Cities: ");
    scanf("%d", &row);

    printf("Enter no of days: ");
    scanf("%d", &coloumn);

    int arr[row][coloumn];

    printf("Enter the Temp:\n");
    for(int i=0; i<row; i++){
        printf("City %d: ", i+1);
        for(int j=0; j<coloumn; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Displaying values: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<coloumn; j++){
            printf("City %d, Day %d = %d\n", i+1, j+1, arr[i][j]);
        }
    }
    return 0;

}