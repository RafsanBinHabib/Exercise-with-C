// write a program that read two numbers and display minimum.

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("%d is minimum.\n", a);
    }

    else
    {
        printf("%d is minimum.\n", b);
    }

    return 0;
}