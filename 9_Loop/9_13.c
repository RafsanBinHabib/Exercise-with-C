// write a program that read two numbers and display Combination.

#include <stdio.h>

int main()
{
    int x, y, npr, ncr, form, fact1 = 1, fact2 = 1;

    scanf("%d %d", &x, &y);

    for (int i = 1; i <= x; i++)
    {
        fact1 *= i;
    }

    form = x - y;

    for (int i = 1; i <= form; i++)
    {
        fact2 *= i;
    }

    npr = fact1 / fact2;

    ncr = npr / fact2;

    printf("nCr = %d\n", ncr);

    return 0;
}