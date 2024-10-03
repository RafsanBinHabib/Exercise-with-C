// write a program that read any integer and test prime or not.

#include <stdio.h>

int main()
{
    int n, cnt = 0;

    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not Prime\n");
    }

    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                cnt++;
        }

        if (cnt > 0)
            printf("%d is Not prime\n", n);

        else
            printf("%d is prime\n", n);
    }

    return 0;
}