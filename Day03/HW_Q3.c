#include<stdio.h>

int main(){
    int input, rupee, paisa;

    printf("Enter the amount: ");
    scanf("%d", &input);

    rupee = input / 100;
    paisa = input % 100;

    printf("%d paisa = %d Rupee and %d paisa\n", input, rupee, paisa);

    return 0;
}