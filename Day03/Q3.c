#include<stdio.h>
#define PI 3.14f

int main()
{
    float radius;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area is: %.2f.", area);

    return 0;
}