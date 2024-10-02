// write a program that any lower case character and display in upper case.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char lower, upper;

    printf("Enter any lower character: ");

    scanf("%c", &lower);

    upper = toupper(lower);

    printf("Upper Case: %c\n", upper);

    return 0;
}