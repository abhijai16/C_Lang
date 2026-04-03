#include<stdio.h>

int main(){
    int height, base;
    float area;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    area = 0.5 * height * base;

    printf("The area of the triangle is: %.2f .", area);
    
    return 0;
}
