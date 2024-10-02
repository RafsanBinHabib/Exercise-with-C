// write a program that read any date in the format "DD-MM-YYYY", "DD/MM/YYYY", "DD MM YYYY", "DD,MM,YYYY".

#include <stdio.h>

int main()
{
    int day, month, year;

    char ch;

    scanf("%d%c%d%c%d", &day, &ch, &month, &ch, &year);

    printf("Day: %d\n", day);

    printf("Month: %d\n", month);

    printf("Year: %d\n", year);

    return 0;
}