#include <stdio.h>

int main()
{
    float time, bestTime = 9999, total = 0;
    int lap = 0, bestLap = 0, count = 0;

    printf("Enter the lap times (0 to finish):\n");

    do
    {
        lap++;
        printf("lap %d = ", lap);
        scanf("%f", &time);

        if (time != 0)
        {
            total += time;
            count++;
            if (time < bestTime)
            {
                bestTime = time;
                bestLap = lap;
            }
        }
    } while (time != 0);

    if (count > 0)
    {
        printf("\nbest time = %.3f on lap %d\n", bestTime, bestLap);
        printf("average time = %.3f\n", total / count);
    }
    else
    {
        printf("\nNo valid times entered.\n");
    }

    return 0;
}
