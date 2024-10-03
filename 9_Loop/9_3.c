// write a program that read any positive integer and display reverse.

#include <stdio.h>

int main()
{
    int n, m, rem, rev = 0;

    scanf("%d", &n);

    m = n;

    while (n != 0)
    {
        rem = n % 10;

        rev = rev * 10 + rem;

        n /= 10;
    }

    printf("Reverse of %d is %d\n", m, rev);

    return 0;
}