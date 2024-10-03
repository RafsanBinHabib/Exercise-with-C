// write a program that read two numbers and display maximum.

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is maximum.\n", a);
    }

    else
    {
        printf("%d is maximum.\n", b);
    }

    return 0;
}