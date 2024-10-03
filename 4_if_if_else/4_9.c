// write a program that read mark and display pass or fail.

#include <stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks!\n");
    }

    else
    {
        if (marks >= 40)
        {
            printf("Pass!\n");
        }

        else
        {
            printf("Fail!\n");
        }
    }
    return 0;
}