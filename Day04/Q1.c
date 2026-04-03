#include<stdio.h>

int main(){
    int time, hour, min, sec;

    printf("Enter the time: ");
    scanf("%d", &time);

    hour = time / 3600;
    min = (time % 3600) / 60;
    sec = ((time % 3600) % 60);

    printf("%d second = %d Hour, %d Minute and %d Second\n", time, hour, min, sec);

    return 0;
}