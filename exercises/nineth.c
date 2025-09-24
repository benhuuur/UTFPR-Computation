#include <stdio.h>

int main()
{
    double distance, converted;
    char unit;

    printf("*** Distance Converter (km / miles) ***\n");

    printf("Enter the distance: ");
    scanf("%lf", &distance);

    printf("Enter the unit (k for kilometers, m for miles): ");
    scanf(" %c", &unit);

    if (unit == 'k' || unit == 'K')
    {
        converted = distance * 0.621371;
        printf("\nDistance = %.6f miles\n", converted);
    }
    else if (unit == 'm' || unit == 'M')
    {
        converted = distance * 1.60934;
        printf("\nDistance = %.6f km\n", converted);
    }
    else
    {
        printf("\nInvalid unit entered!\n");
    }

    return 0;
}
