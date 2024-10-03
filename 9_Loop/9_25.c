// write a program that print all the prime numbers from m to n.

#include <stdio.h>

int main()
{
    int m, n, i, j, isPrime;

    scanf("%d %d", &m, &n);

    if (m <= 1)
    {
        m = 2;
    }

    for (i = m; i <= n; i++)
    {
        isPrime = 1;

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
        }
    }

    printf("\n");

    return 0;
}