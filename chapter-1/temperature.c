/* chatper 1-3 */
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    float fahr, celisus;
    int lower, upper, step; 

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to Celsius conversion table\n");
    printf("Fahr\tCelsius\n");
    fahr = lower;
    // while (fahr<=upper)
    // for (fahr=lower; fahr<=upper; fahr+=step)
    for (fahr=LOWER; fahr<=UPPER; fahr+=STEP)
    {
        celisus = (fahr - 32.0) * 5.0 / 9.0;
        printf("%3.0f\t%6.2f\n", fahr, celisus);
        fahr = fahr + step;
    }
    return 0;
}