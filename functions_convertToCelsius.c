// Function to convert Fahrenheit to Celsius
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program converts temperature from Fahrenheit to Celsius.
*/



#include <stdio.h>


float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9.0;  // formula
    return celsius;
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);  // function call
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}