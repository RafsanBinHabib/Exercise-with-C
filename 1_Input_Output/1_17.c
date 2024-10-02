// write a program that read any heaxdecimal number and display equivalent decimal number.

#include <stdio.h>

int main()
{
    int hexadecimal;

    printf("Enter any hexadecimal number: ");

    scanf("%x", &hexadecimal);

    printf("Decimal: %d\n", hexadecimal);

    return 0;
}