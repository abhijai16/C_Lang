#include<stdio.h>

int main(){
    int myInt = 3;
    int myInt2 = 32;
    char grade = 'a';

    printf("%d\n", sizeof(myInt)); //4 bytes
    printf("%d\n", sizeof(myInt2)); //4 bytes
    printf("%d\n", sizeof(grade)); //1 byte
}