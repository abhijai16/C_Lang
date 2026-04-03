#include<stdio.h>

int main(){
    int distance, kilometer, meter;

    printf("Enter the distance: ");
    scanf("%d", &distance);

    kilometer = distance / 1000;
    meter = distance % 1000;

    printf("%d meter = %d Km and %d meters.\n", distance, kilometer, meter);

    return 0;
}