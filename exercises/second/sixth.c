#include <stdio.h>

int main() {
    int months;
    float consumption, total = 0, max, min;

    printf("*** Calculation of average energy consumption ***\n");
    printf("How many months will be considered? ");
    scanf("%d", &months);

    for (int i = 1; i <= months; i++) {
        printf("Consumption for month %d = ", i);
        scanf("%f", &consumption);

        if (i == 1) {
            max = min = consumption;
        }

        if (consumption > max) max = consumption;
        if (consumption < min) min = consumption;

        total += consumption;
    }

    printf("\naverage consumption = %f\n", total / months);
    printf("maximum consumption = %f\n", max);
    printf("minimum consumption = %f\n", min);

    return 0;
}
