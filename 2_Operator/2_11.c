// write a program that read temperature in Celcius and display in Fahrehite.

#include <stdio.h>

int main()
{
    float celcius, fahrenhite;

    scanf("%f", &celcius);

    fahrenhite = 9 * (celcius / 5) + 32;

    printf("Fahrenhite: %.2f Degree\n", fahrenhite);

    return 0;
}