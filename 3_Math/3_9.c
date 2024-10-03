// write a program that read a value n and display sin inverse(n).

#include <stdio.h>
#include <math.h>

int main()
{
    double n, result;

    scanf("%lf", &n);

    result = asin(n) * (180 / 3.1416);

    printf("Inverse of Sin in Radian: %lf\n", asin(n));

    printf("Inverse of Sin in Degree: %lf\n", result);

    return 0;
}