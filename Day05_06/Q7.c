#include<stdio.h>

int main(){
    int num1, num2;
    char operator;
    
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operation from the menu (A for add, S for subtract, M for multiply, D for divide): ");
    scanf(" %c", &operator);

    switch(operator){
        case 'A': printf("The Sum is %d.\n", num1+num2); break;
        case 'S': printf("The Subtraction is %d.\n", num1-num2); break;
        case 'M': printf("The Multiplication is %d.\n", num1*num2); break;
        case 'D': printf("The Division is %d.\n", num1/num2); break;
    }

    return 0;
}