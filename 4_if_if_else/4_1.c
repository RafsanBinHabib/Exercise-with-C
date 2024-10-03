// write a program that read an intger and print odd or even.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is a odd number.\n", n);
    }

    else
    {
        printf("%d is an even number.\n", n);
    }

    return 0;
}