#include <stdio.h>

int main()
{
    float number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%f", &number);

    printf("\nnumber = %.2f\n", number);

    while (number >= 1)
    {
        printf(" = %.2f / 2 = %.2f\n", number, number / 2);
        number = number / 2;
        count++;
    }

    printf("\nnumber of divisions = %d\n", count);

    return 0;
}
