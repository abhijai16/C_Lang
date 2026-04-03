//Lucas sequence

#include<stdio.h>

int main(){
    int a = 2, b = 1, c, n;

    printf("Enter number of Lucas numbers to be generated: ");
    scanf("%d", &n);

    if(n>=1) printf("%d ", b);

    for(int i = 0; i < n - 1; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}