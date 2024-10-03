// write a program that read any number and display it's square root.

#include <stdio.h>
#include <math.h>

int main()
{
    int x, res;

    scanf("%d", &x);

    res = sqrt(x);

    printf("Square Root of %d is %d\n", x, res);

    return 0;
}