// 1.2+2.3+3.4+......... upto n'th term.

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1, j = 2; i <= n; i++, j++)
    {
        printf("%d.%d + ", i, j);
    }

    printf("...\n");

    return 0;
}