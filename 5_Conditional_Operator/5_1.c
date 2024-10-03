// write a program that read an intger and print odd or even.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    (n % 2 == 0) ? printf("%d is a even!\n", n) : printf("%d is an odd!\n", n);

    return 0;
}