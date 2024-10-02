// write a program that read any decimal number and display equivalent octal number.

#include <stdio.h>

int main()
{
    int decimal;

    printf("Enter any decimal number: ");

    scanf("%d", &decimal);

    printf("Octal: %o\n", decimal);

    return 0;
}