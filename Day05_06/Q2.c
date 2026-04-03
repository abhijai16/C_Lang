#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
        printf("The upper case of the entered letter is '%c'.\n", ch);
    }

    else if(ch >= 'A' && ch <= 'Z'){
        printf("You have entered '%c' which is already in upper case.\n", ch);
    }

    return 0;
}