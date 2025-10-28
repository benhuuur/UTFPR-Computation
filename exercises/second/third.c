#include <stdio.h>

int main()
{
    int n, i;
    unsigned long factorial = 1;

    printf("Enter the number to be factorialized: ");
    scanf("%d", &n);

    printf("\n%d! = ", n);
    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
            printf(" * ");
        factorial *= i;
    }

    printf("\n%d! = %llu\n", n, factorial);

    return 0;
}
