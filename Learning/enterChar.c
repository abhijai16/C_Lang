#include<stdio.h>

int main(){
    int age;
    char is_indian;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an indian citizen?(Y/N): ");
    scanf(" %c", &is_indian); //Use space before %c.

    if(is_indian == 'Y'){
        printf("You are Indian .");
    }
    
    else{
        printf("You are not an Indian.\n");
    }
    
    return 0;
}