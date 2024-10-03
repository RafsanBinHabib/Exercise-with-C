// write a program that read three numbers and display minimum.

#include <stdio.h>

int main()
{
    int a, b, c, mn;

    scanf("%d %d %d", &a, &b, &c);

    mn = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    printf("%d is minimum\n", mn);

    return 0;
}