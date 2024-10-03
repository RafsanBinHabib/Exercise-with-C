// write a program that read two numbers and display GCD & LCM.

#include <stdio.h>

int main()
{
    int x, y, n1, n2, gcd, lcm, rem;

    scanf("%d %d", &x, &y);

    n1 = x;
    n2 = y;

    if (n2 > n1)
    {
        int tmp = n1;

        n1 = n2;

        n2 = tmp;
    }

    while (n2 != 0)
    {
        rem = n1 % n2;

        n1 = n2;

        n2 = rem;
    }

    gcd = n1;

    lcm = (x * y) / gcd;

    printf("GCD of %d & %d is %d\n", x, y, gcd);

    printf("LCM of %d & %d is %d\n", x, y, lcm);

    return 0;
}