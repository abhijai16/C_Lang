#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c, D, type;
    float root1, root2, real, imag;

    printf("Input values for a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if(D > 0)
        type = 1;
    else if(D == 0)
        type = 0;
    else
        type = -1;

    switch(type){
        case 1:{
            root1 = (-b + sqrt(D))/(2.0 * a);
            root2 = (-b - sqrt(D))/(2.0 * a);
            printf("The Roots are real and unequal.\n");
            printf("Roots are %.2f and %.2f.\n", root1, root2);
            break;
        }
        case 0:{
            root1 = -b / (2.0 * a);
            printf("The Roots are real and equal.\n");
            printf("Roots are %.2f both.\n", root1);
            break;
        }
        case -1:{           
            real = -b / (2.0 * a);
            imag = sqrt(-D)/(2.0 * a);
            
            printf("The Roots are imaginary.\n");
            printf("Root1 = %.2f + i%.2f\n", real, imag);
            printf("Root2 = %.2f - i%.2f\n", real, imag);
        }
    }
    return 0;
}