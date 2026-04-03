#include<stdio.h>

int main(){
    int mark;

    printf("Enter total mark secured by a student: ");
    scanf("%d", &mark);

    if(mark <= 100 && mark >= 90) printf("Secured grade is O.\n");
    else if(mark <= 89 && mark >= 80) printf("Secured grade is E.\n");
    else if(mark <= 79 && mark >= 70) printf("Secured grade is A.\n");
    else if(mark <= 69 && mark >= 60) printf("Secured grade is B.\n");
    else if(mark <= 59 && mark >= 50) printf("Secured grade is C.\n");
    else if(mark <= 49 && mark >= 40) printf("Secured grade is D.\n");
    else printf("Secured grade is F.\n");

    return 0;
}