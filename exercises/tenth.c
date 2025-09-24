#include <stdio.h>

int main()
{
    float pollution;

    printf("Enter the pollution index: ");
    scanf("%f", &pollution);

    if (pollution <= 0.25)
    {
        printf("\nPollution index acceptable. No industries need to stop.\n");
    }
    if (pollution >= 0.30 && pollution < 0.40)
    {
        printf("\nIndustries in group 1 must stop activities!\n");
    }
    if (pollution >= 0.40 && pollution < 0.50)
    {
        printf("\nIndustries in groups 1 and 2 must stop activities!\n");
    }
    if (pollution >= 0.50)
    {
        printf("\nIndustries in groups 1, 2 and 3 must stop activities!\n");
    }

    return 0;
}
