#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int table, answer, correct = 0, wrong = 0;

    srand(time(NULL));
    table = rand() % 10 + 1;

    printf("Multiplication table of %d\n", table);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = ", table, i);
        scanf("%d", &answer);

        if (answer == table * i)
        {
            correct++;
        }
        else
        {
            wrong++;
            printf("Wrong! %d x %d = %d\n", table, i, table * i);
        }
    }

    printf("\nCorrect answers = %d\tWrong answers = %d\n", correct, wrong);

    if (wrong <= 3)
        printf("Congratulations, you know the multiplication table!!!\n");
    else if (wrong <= 5)
        printf("Not bad, but you should study a little more!\n");
    else
        printf("You really need to study more!\n");

    return 0;
}