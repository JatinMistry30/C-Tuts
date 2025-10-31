#include <stdio.h>

float celsius_to_farenheit(float celcius)
{
    return (celcius * 9.0 / 5.0) + 32;
}

int main()
{
    float celcius, fahrenHeit;

    printf("Enter temperature in celsius:");
    scanf("%f", &celcius);

    fahrenHeit = celsius_to_farenheit(celcius);
    printf("%.2f Celsius is %.2f Fahrenheit\n", celcius, fahrenHeit);

    return 0;
}