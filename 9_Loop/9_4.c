// write a program that read any decimal number and display equivalent binary number.

#include <stdio.h>

int main()
{
    int n, m, binary = 0, rev = 0, rem = 0;

    scanf("%d", &n);

    m = n;

    while (n != 0)
    {
        rem = n % 2;

        binary = binary * 10 + rem;

        n /= 2;
    }

    rem = 0;

    while (binary != 0)
    {
        rem = binary % 10;

        rev = rev * 10 + rem;

        binary /= 10;
    }

    printf("Binary of %d is %d", m, rev);

    return 0;
}