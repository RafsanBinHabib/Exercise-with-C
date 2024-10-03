// write a program that read three numbers and determine the roots of the quadratic equation: ax^2+bx+c=0.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d;

    double sqrt_val;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("Invalid\n");
    }

    d = b * b - 4 * a * c;

    sqrt_val = sqrt(abs(d));

    if (d > 0)
    {
        printf("Roots are real and different\n");

        printf("%lf\n", (-b + sqrt_val) / (2 * a));

        printf("%lf\n", (-b - sqrt_val) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Roots are real and same\n");

        printf("%lf", -b / (2 * a));
    }
    else
    {
        printf("Roots are complex\n");

        printf("%lf + i%lf\n", -b / (2 * a), sqrt_val / (2 * a));

        printf("%lf - i%lf\n", -b / (2 * a), sqrt_val / (2 * a));
    }

    return 0;
}