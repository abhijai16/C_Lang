#include<stdio.h>

int main(){
    int centrigrade;
    float fahrenheit;

    printf("Enter the temperature in Centigrade: ");
    scanf("%d", &centrigrade);

    fahrenheit = ((9.0/5)*centrigrade) + 32;

    printf("The Fahrenheit temperature is: %.2f.\n", fahrenheit);

    return 0;
}