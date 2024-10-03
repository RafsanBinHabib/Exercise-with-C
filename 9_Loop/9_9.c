// write a program that read two numbers(x,y) and display x^y.

#include <stdio.h>

int main()
{
    int x, y;

    long long int mul = 1;

    scanf("%d %d", &x, &y);

    for (int i = 1; i < y; i++)
    {
        if (i == 1)
            mul = x * x;

        else
            mul *= x;
    }

    printf("Answer: %lld\n", mul);

    return 0;
}