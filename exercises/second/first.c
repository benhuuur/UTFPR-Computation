#include <stdio.h>

int main()
{
    int sum = 0;
    int start = 101;
    int end = 195;

    for (int i = start; i < end + 1; i++)
    {
        if (i % 2 != 0)
        {
            printf("sum = %d + %d\n", sum, i);
            sum += i;
        }
    }

    printf("sum = %d\n", sum);

    return 0;
}
