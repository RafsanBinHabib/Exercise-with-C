// write a program that read any decimal number and display equivalent octal number.

#include <stdio.h>

int main()
{
    int n, m, octal = 0, rev = 0, rem = 0;

    scanf("%d", &n);

    m = n;

    while (n != 0)
    {
        rem = n % 8;

        octal = octal * 10 + rem;

        n /= 8;
    }

    rem = 0;

    while (octal != 0)
    {
        rem = octal % 10;

        rev = rev * 10 + rem;

        octal /= 10;
    }

    printf("Octal of %d is %d", m, rev);

    return 0;
}