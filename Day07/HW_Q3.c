#include<stdio.h>

int main(){
    int num,temp, reverse = 0;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0){
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }

    if(num == reverse){
        printf("The given number is Palindrome.\n");
    }
    else printf("The given number is not Palilndrome.\n");

    return 0;
}
