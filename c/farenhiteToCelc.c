#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main()
{
    // Set a fahrenheit value
    float f_value;

    printf("Farenhite :\n");
    // Call the function with the fahrenheit value

    f_value = scanf("%.2f", &f_value);
    float result = toCelsius(f_value);

    // Print the fahrenheit value
    printf("Fahrenheit: %.2f\n", f_value);

    // Print the result
    printf("Convert Fahrenheit to Celsius: %.2f\n", result);

    return 0;
}