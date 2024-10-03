// write a program that read any number and equvalent roman number.

#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);

    switch (number)
    {
    case (1):
        printf("I\n");
        break;

    case (5):
        printf("V\n");
        break;

    case (50):
        printf("L\n");
        break;

    case (100):
        printf("C\n");
        break;

    default:
        printf("Use only 1/5/50/100!\n");

        break;
    }

    return 0;
}