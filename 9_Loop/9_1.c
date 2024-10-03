// write a program that read a positive integer and display its factorial.

#include <stdio.h>

int main()
{
    int n, fact = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}