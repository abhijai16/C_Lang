#include<stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(char j = i; j >= 0; j--){
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}