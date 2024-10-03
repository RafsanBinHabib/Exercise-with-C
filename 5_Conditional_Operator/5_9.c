// write a program that read mark and display pass or fail.

#include <stdio.h>

int main()
{
    int marks;

    scanf("%d", &marks);

    (marks < 0 || marks > 100) ? printf("Invalid!\n") : (marks >= 40) ? printf("Pass!\n")
                                                                      : printf("Fail!\n");

    return 0;
}