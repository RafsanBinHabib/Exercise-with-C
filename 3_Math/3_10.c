// write a program that read a value n and display cos inverse(n).

#include <stdio.h>
#include <math.h>

int main()
{
    double n, result;

    scanf("%lf", &n);

    result = acos(n) * (180 / 3.1416);

    printf("Inverse of Cos in Radian: %lf\n", acos(n));

    printf("Inverse of Cos in Degree: %lf\n", result);

    return 0;
}