#include<stdio.h>

int main(){
    int h1, m1, s1;
    int h2, m2, s2;
    int hour, minute, second;

    printf("Enter two times: ");
    scanf("%d:%d:%d and %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);

    second = s1 + s2;
    minute = m1 + m2;
    hour = h1 + h2;

    if(second >= 60){
        minute = minute + second / 60;
        second = second % 60;
    }

    if(minute >= 60){
        hour = hour + minute / 60;
        minute = minute % 60;
    }

    printf("Output time is %d:%d:%d\n", hour, minute, second);

    return 0;
}