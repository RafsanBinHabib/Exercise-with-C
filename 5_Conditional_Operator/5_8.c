// write a program that read three numbers and display medimum.

#include <stdio.h>

int main()
{
    int a, b, c, mx, mn, mid;

    scanf("%d %d %d", &a, &b, &c);

    mx = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    mn = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    mid = (a != mx && a != mn) ? a : (b != mx && b != mn) ? b : c;

    printf("%d is medimum\n", mid);

    return 0;
}