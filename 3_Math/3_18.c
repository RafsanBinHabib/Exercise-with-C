// write a program that read any number x and display log10(x).

#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    double res = log10(n);

    printf("Result: %.3lf\n", res);

    return 0;
}