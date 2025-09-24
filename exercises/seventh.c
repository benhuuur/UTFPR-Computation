#include <stdio.h>

int main()
{
    float height, ideal;
    char gender;

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your gender (m for male, f for female): ");
    scanf(" %c", &gender);

    if (gender == 'm' || gender == 'M')
    {
        ideal = (72.7 * height) - 58;
    }
    else if (gender == 'f' || gender == 'F')
    {
        ideal = (62.1 * height) - 44.7;
    }
    else
    {
        printf("Invalid gender input!\n");
        return 1;
    }

    printf("Your ideal weight = %.1f kg\n", ideal);

    return 0;
}
