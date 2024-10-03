// write a program that count the total prime numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n, i, j, count = 0;

    scanf("%d", &n);

    if (n <= 1)
    {
        printf("There are no prime numbers between 1 and %d.\n", n);
    }

    for (i = 2; i <= n; i++)
    {
        int isPrime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers: %d\n", count);

    return 0;
}