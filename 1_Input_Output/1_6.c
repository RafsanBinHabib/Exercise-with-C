// write a program that read and display long number.

#include <stdio.h>

int main()
{
    long long x;

    printf("Enter a long number: ");

    scanf("%lld", &x);

    printf("The value is: %lld\n", x);

    return 0;
}