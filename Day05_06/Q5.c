#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, d;
    float root1, root2, real, imag;

    printf("Input values for a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = (b*b) - (4*a*c);

    if(d > 0){
        root1 = (-b + sqrt(d)) / (2.0*a);
        root2 = (-b - sqrt(d)) / (2.0*a);

        printf("Roots are real and unequal.\n");
        printf("Roots are %.2f and %.2f\n", root1, root2);
    }

    else if(d == 0){
        root1 = -b / (2.0*a);

        printf("Roots are real and equal.\n");
        printf("Roots are %.2f both.\n", root1);
    }

    else{
        real = -b / (2.0*a);
        imag = sqrt(-d) / (2.0*a);

        printf("Roots are complex.\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}