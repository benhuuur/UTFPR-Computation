#include <stdio.h>

int main()
{
    int minutes;
    int total, boxes, leftover;

    printf("Enter the time (in minutes): ");
    scanf("%d", &minutes);

    total = minutes * 45;
    boxes = total / 300;
    leftover = total % 300;

    printf("\nTime (minutes) = %d\n", minutes);
    printf("Total cable produced = %d meters\n", total);
    printf("Boxes filled = %d\tLeftover = %d meters\n", boxes, leftover);

    return 0;
}
