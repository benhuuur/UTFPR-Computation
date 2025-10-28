#include <stdio.h>

int main(void)
{
    float n1, n2, n3, average;

    printf("Enter the first grade: ");
    scanf("%f", &n1);
    printf("Enter the second grade: ");
    scanf("%f", &n2);
    printf("Enter the third grade: ");
    scanf("%f", &n3);

    average = (n1 + n2 + n3) / 3;

    printf("\naverage = %.1f ", average);
    if (average >= 7.0)
        printf("approved!\n");
    else
        printf("failed!\n");

    return 0;
}
