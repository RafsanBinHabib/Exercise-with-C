// write a program that read two numbers and display maximum.

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d is maximum.\n", a) : printf("%d is maximum.\n", b);

    return 0;
}