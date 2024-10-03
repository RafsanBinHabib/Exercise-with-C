// write a program that read any year and display leap year or not.

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Leap Year!\n");
    }

    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("Leap Year!\n");
    }

    else
    {
        printf("Not Leap Year!\n");
    }

    return 0;
}