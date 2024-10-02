// write a program that radius of a circle and display area.

#include <stdio.h>

int main()
{
    float radius;

    scanf("%f", &radius);

    double area = 3.1416 * radius * radius;

    printf("Area: %.2lf\n", area);

    return 0;
}