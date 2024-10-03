// write a program that read three numbers and display medium.

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a < b && a > c) || (a > b && a < c))
    {
        printf("%d is medium.\n", a);
    }

    else if ((b < a && b > c) || (b > a && b < c))
    {
        printf("%d is medium.\n", b);
    }

    else
    {
        printf("%d is medium.\n", c);
    }

    return 0;
}