// write a program that read ASCII value and display equivalent character.

#include <stdio.h>

int main()
{
    int ascii;

    printf("Enter any ASCII value: ");

    scanf("%d", &ascii);

    printf("Character is: %c\n", (char)ascii);

    return 0;
}