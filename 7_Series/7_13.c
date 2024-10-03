// 1.2.3+2.3.4+3.4.5......... upto n'th term.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1, j = 2, k = 3; i <= n; i++, j++, k++)
    {
        printf("%d.%d.%d + ", i, j, k);
    }

    printf("...\n");

    return 0;
}