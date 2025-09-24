#include <stdio.h>

int main(void)
{
    int thousands, hundreds, tens, ones;
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    thousands = number / 1000;
    hundreds = (number / 100) % 10;
    tens = (number / 10) % 10;
    ones = number % 10;

    printf("\nThousands = %d\n", thousands);
    printf("Hundreds = %d\n", hundreds);
    printf("Tens = %d\n", tens);
    printf("Ones = %d\n", ones);

    return 0;
}
