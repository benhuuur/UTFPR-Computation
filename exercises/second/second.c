#include <stdio.h>

int main()
{
    float sum = 0;
    int numerator, denominator;

    numerator = 1;
    denominator = 1;

    while (denominator <= 50)
    {
        printf("sum = %.2f + %d/%d...\n", sum, numerator, denominator);
        sum = sum + (float)numerator / denominator;
        numerator += 2;
        denominator++;
    }

    printf("\nFinal sum = %.2f\n", sum);
    return 0;
}
