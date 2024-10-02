// write a program that read two numbers and display bitwise AND, OR, Exclusive OR.

#include <stdio.h>

int main()
{
    int x, y, and, or, ex_or;

    scanf("%d %d", &x, &y);

    and = x & y;

    or = x | y;

    ex_or = x ^ y;

    printf("AND: %d\n", and);

    printf("OR: %d\n", or);

    printf("Exclusive OR: %d\n", ex_or);

    return 0;
}