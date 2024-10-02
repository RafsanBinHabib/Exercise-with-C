// write a program that read temperature in Fahrenhite and display in Celcius.

#include <stdio.h>

int main()
{
    float celcius, fahrenhite;

    scanf("%f", &fahrenhite);

    celcius = ((fahrenhite - 32) / 9) * 5;

    printf("Celcius: %.2f Degree\n", celcius);

    return 0;
}