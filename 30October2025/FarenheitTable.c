#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 300;
    upper = 0;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n",celsius, fahr);
        fahr = fahr + step;
    }
    return 0;
}