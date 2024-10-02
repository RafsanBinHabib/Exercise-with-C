// write a program that read a number and multiply by five using shift operator.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int res = n << 5;

    printf("Result: %d\n", res);

    return 0;
}