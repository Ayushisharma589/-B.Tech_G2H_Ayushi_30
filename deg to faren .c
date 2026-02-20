
#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Temperature Converter (Celsius to Fahrenheit)\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
