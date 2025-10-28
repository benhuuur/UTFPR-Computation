#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers[20];
    int max1, max2;
    float sum = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        numbers[i] = rand() % 60;
        printf("n%02d = %d\n", i + 1, numbers[i]);
        sum += numbers[i];
    }

    max1 = max2 = 0;

    for (int i = 0; i < 20; i++)
    {
        if (numbers[i] > max1)
        {
            max2 = max1;
            max1 = numbers[i];
        }
        else if (numbers[i] > max2 && numbers[i] < max1)
        {
            max2 = numbers[i];
        }
    }

    printf("\naverage of numbers = %.0f\n", sum / 20);
    printf("largest number = %d\n", max1);
    printf("second largest = %d\n", max2);

    return 0;
}
