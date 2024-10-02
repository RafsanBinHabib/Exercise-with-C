// write a program that any upper case character and display in lower case.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char lower, upper;

    printf("Enter any upper character: ");

    scanf("%c", &upper);

    lower = tolower(upper);

    printf("Lower Case: %c\n", lower);

    return 0;
}