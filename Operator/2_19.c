// write a program that read a number and mod by 4 using bitwise AND.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int res = n & 3;

    printf("Result: %d\n", res);

    return 0;
}