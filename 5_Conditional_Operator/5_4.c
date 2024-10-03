// write a program that read two numbers and display minimum.

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    (a < b) ? printf("%d is minimum.\n", a) : printf("%d is minimum.\n", b);

    return 0;
}