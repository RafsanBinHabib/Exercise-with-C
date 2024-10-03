// 1.1^2+2.3^2+3.5^2+......... upto n'th term.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1, j = 1, k = 1; i <= n; i++, j++, k += 2)
    {
        printf("%d.%d^2 + ", j, k);
    }

    printf("...\n");

    return 0;
}