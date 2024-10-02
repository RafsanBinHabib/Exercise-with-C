// write a program that read any octal number and display equivalent decimal number.

#include <stdio.h>

int main()
{
    int octal;

    printf("Enter any octal number: ");

    scanf("%o", &octal);

    printf("Decimal: %d\n", octal);

    return 0;
}