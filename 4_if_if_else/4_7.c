// write a program that read three numbers and display minimum.

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("%d is minimum.\n", a);
    }

    else if (b < a && b < c)
    {
        printf("%d is minimum.\n", b);
    }

    else
    {
        printf("%d is minimum.\n", c);
    }

    return 0;
}