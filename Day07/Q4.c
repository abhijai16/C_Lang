#include<stdio.h>

int main(){
    int num, sum = 0;
    float average;

    printf("Enter 10 numbers: \n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &num);
        sum = sum + num;
    }
    average = sum / 10.0;

    printf("The sum is %d.\n", sum);
    printf("The average is %f.\n", average);

    return 0;
}