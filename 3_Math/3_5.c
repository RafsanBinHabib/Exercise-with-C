// write a program that read any angle t and display cot(t), sec(t), cosec(t).

#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian;

    scanf("%f", &degree);

    radian = degree * (3.1416 / 180);

    printf("Cosec: %f\n", 1 / sin(radian));

    printf("Sec: %f\n", 1 / cos(radian));

    printf("Cot: %f\n", 1 / tan(radian));

    return 0;
}