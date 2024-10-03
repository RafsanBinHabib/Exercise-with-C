// write a program that read any angle t and display sin(t), cos(t), tan(t).

#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian;

    scanf("%f", &degree);

    radian = degree * (3.1416 / 180);

    printf("Sin: %f\n", sin(radian));

    printf("Cos: %f\n", cos(radian));

    printf("Tan: %f\n", tan(radian));

    return 0;
}