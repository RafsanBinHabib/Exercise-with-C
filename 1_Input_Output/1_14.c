// write a program that read any decimal number and display equivalent heaxdecimal number.

#include <stdio.h>

int main()
{
    int decimal;

    printf("Enter any decimal number: ");

    scanf("%d", &decimal);

    printf("Hexadecimal: %x\n", decimal);

    return 0;
}