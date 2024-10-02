// write a program that read character and display ASCII value.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");

    scanf("%c", &ch);

    printf("ASCII value is: %d\n", (int)ch);

    return 0;
}