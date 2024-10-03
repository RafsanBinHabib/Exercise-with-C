// write a program that read a digit and display by spelling.

#include <stdio.h>

int main()
{
    int digit;

    scanf("%d", &digit);

    switch (digit)
    {
    case (1):
        printf("One!\n");
        break;

    case (2):
        printf("Two!\n");
        break;

    case (3):
        printf("Three!\n");
        break;

    default:
        printf("More than three!\n");
        break;
    }

    return 0;
}