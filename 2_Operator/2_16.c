// write a program that read a number and divide by two using shift operator.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int res = n >> 2;

    printf("Result: %d\n", res);

    return 0;
}