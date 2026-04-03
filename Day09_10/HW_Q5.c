#include<stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 1; j <= i+1; j++){
                printf("%d ", j);
            }
        }

        else{
            for(int j = i; j >= 0; j--){
                printf("%d ", 1 + j);
            }
        }
        printf("\n");
    }
    return 0;
}