// write a program that read an intger and print odd or even.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is a even number.\n", n);
    }

    else
    {
        printf("%d is an odd number.\n", n);
    }

    return 0;
}
