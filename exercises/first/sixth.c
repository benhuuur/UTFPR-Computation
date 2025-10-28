#include <stdio.h>

int main()
{
    float grade;
    int absences, classes;
    float attendance;

    printf("Enter the final grade: ");
    scanf("%f", &grade);

    printf("Enter the number of absences: ");
    scanf("%d", &absences);

    printf("Enter the total number of classes: ");
    scanf("%d", &classes);

    attendance = ((float)(classes - absences) / classes) * 100;

    printf("\nFinal grade = %.1f\n", grade);
    printf("Absences = %d\n", absences);
    printf("Total classes = %d\n", classes);

    if (grade >= 6.0 && attendance >= 75.0)
    {
        printf("\nApproved!\n");
    }
    else if (grade < 6.0 && attendance < 75.0)
    {
        printf("\nFailed by both grade and attendance!\n");
    }
    else if (grade < 6.0)
    {
        printf("\nFailed by grade!\n");
    }
    else
    {
        printf("\nFailed by attendance!\n");
    }

    return 0;
}
