// 1^2+3^2+5^2+......... upto n'th term.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1, j = 1; i <= n; i++, j += 2)
    {
        printf("%d^2 + ", j);
    }

    printf("...\n");

    return 0;
}