#include <stdio.h>

int main(void)
{
    int input, hours, minutes, seconds;

    printf("Time (in seconds) = ");
    scanf("%d", &input);

    hours = input / 3600;
    minutes = (input % 3600) / 60;
    seconds = input % 60;

    printf("\n%d hour(s) %d minute(s) %d second(s)\n",
           hours, minutes, seconds);

    return 0;
}
