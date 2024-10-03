// write a program that read three numbers and display maximum.

#include <stdio.h>

int main()
{
    int a, b, c, mx;

    scanf("%d %d %d", &a, &b, &c);

    mx = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("%d is maximum\n", mx);

    return 0;
}