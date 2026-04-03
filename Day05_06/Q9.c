#include<stdio.h>

int main(){
    int marks;

    printf("Enter total marks: ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100){
        printf("Grade: O\n");
    }
    else if(marks >= 80 && marks <= 89){
        printf("Grade: E\n");
    }
    else if(marks >= 70 && marks <= 79){
        printf("Grade: A\n");
    }
    else if(marks >= 60 && marks <= 69){
        printf("Grade: B\n");
    }
    else if(marks >= 50 && marks <= 59){
        printf("Grade: C\n");
    }
    else if(marks >= 40 && marks <= 49){
        printf("Grade: D\n");
    }
    else if(marks < 40){
        printf("Grade: F\n");
    }
    else{
        printf("Invalid marks\n");
    }

    return 0;
}