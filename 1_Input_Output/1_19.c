// write a program that read and dsiplay your line

#include <stdio.h>

int main()
{
    char line[30];

    gets(line);

    printf("%s\n", line);

    return 0;
}