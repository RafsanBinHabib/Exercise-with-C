// write a program that read any number x and display e to the power x.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    double res = exp(n);

    printf("Result: %.3lf\n", res);

    return 0;
}