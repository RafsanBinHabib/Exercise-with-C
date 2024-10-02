// write a program that read a number and mod by 8 using bitwise AND.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int res = n & 7;

    printf("Result: %d\n", res);

    return 0;
}