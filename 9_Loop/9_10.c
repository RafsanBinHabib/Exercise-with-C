// write a program that read two numbers and display Permutation.

#include <stdio.h>

int main()
{
    int x, y, res, form, fact1 = 1, fact2 = 1;

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

    res = fact1 / fact2;

    printf("nPr = %d\n", res);

    return 0;
}