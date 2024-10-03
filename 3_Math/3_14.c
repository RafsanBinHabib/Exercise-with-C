// write a program that read two numbers and display it's square root.

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    long long int res = pow(x, y);

    printf("Result: %lld\n", res);

    return 0;
}