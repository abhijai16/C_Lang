#include<stdio.h>

int main(){
    int sub1, sub2, sub3, sub4, sub5;
    float sum, avg, percentage;

    printf("Enter the number of 1st subject: ");
    scanf("%d", &sub1);

    printf("Enter the number of 2nd subject: ");
    scanf("%d", &sub2);

    printf("Enter the number of 3rd subject: ");
    scanf("%d", &sub3);

    printf("Enter the number of 4th subject: ");
    scanf("%d", &sub4);

    printf("Enter the number of 5th subject: ");
    scanf("%d", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = sum/5;
    percentage = (sum/1000) * 100;

    printf("The average is: %.2f .\nThe percentage is: %.2f .\n", avg, percentage);
    
    return 0;
}