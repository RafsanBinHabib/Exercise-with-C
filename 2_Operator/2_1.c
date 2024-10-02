// write a program that read two integers and display sum, subtractio, multiplication, division, remainder.

#include <stdio.h>

int main()
{
    int x, y, sum, sub, mul, div, rem;

    printf("Enter two numbers: ");

    scanf("%d %d", &x, &y);

    sum = x + y;

    sub = x - y;

    mul = x * y;

    div = x / y;

    rem = x % y;

    printf("Sum: %d\n", sum);

    printf("Subtration: %d\n", sub);

    printf("Multiplication: %d\n", mul);

    printf("Division: %d\n", div);

    printf("Remainder: %d\n", rem);

    return 0;
}