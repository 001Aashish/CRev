// Celsius → Fahrenheit
#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter temperature in celsius: ");
    scanf("%f", &a);
    result = (1.8 * a)+32 ;
    printf("temperature in fahrenheit = %.2f\n", result);

    return 0;
}
