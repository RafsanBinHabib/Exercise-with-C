// write a program that read any decimal number and display equivalent hexadecimal number.

#include <stdio.h>

int main()
{
    int n, m, hexa = 0, rev = 0, rem = 0;

    scanf("%d", &n);

    m = n;

    while (n != 0)
    {
        rem = n % 16;

        hexa = hexa * 10 + rem;

        n /= 16;
    }

    rem = 0;

    while (hexa != 0)
    {
        rem = hexa % 10;

        rev = rev * 10 + rem;

        hexa /= 10;
    }

    printf("Hexadecimal of %d is %d", m, rev);

    return 0;
}