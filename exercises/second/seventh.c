#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    srand(time(NULL));
    number = rand() % 500;

    printf("Try to guess the magic number (between 0 and 500):\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("\nCongratulations! You guessed the magic number in %d attempts.\n", attempts);

            if (attempts <= 3)
                printf("You are very lucky!\n");
            else if (attempts <= 6)
                printf("You are lucky!\n");
            else if (attempts <= 10)
                printf("You are normal.\n");
            else
                printf("You are unlucky!\n");
        }

    } while (guess != number);

    return 0;
}
