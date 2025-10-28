#include <stdio.h>
#include <stdlib.h>

int main() {
    int workDays;
    float dailyHours;
    int hIn, mIn, hOut, mOut;
    int totalWorked = 0, totalMinutes = 0;

    printf("*** Working Hours Control ***\n\n");
    printf("How many working days this month? ");
    scanf("%d", &workDays);

    printf("What is the daily internship workload (in hours)? ");
    scanf("%f", &dailyHours);

    for (int i = 1; i <= workDays; i++) {
        printf("\nDay %d\n", i);
        printf("Start time (HH:MM): ");
        scanf("%d:%d", &hIn, &mIn);
        printf("End time (HH:MM): ");
        scanf("%d:%d", &hOut, &mOut);

        int workedMinutes = (hOut * 60 + mOut) - (hIn * 60 + mIn);
        totalMinutes += workedMinutes;
    }

    int expectedMinutes = workDays * dailyHours * 60;
    int diff = totalMinutes - expectedMinutes;

    int hours = abs(diff) / 60;
    int minutes = abs(diff) % 60;

    if (diff >= 0)
        printf("\nCredit in hours bank = %d hours and %d minutes\n", hours, minutes);
    else
        printf("\nDebit in hours bank = %d hours and %d minutes\n", hours, minutes);

    return 0;
}
