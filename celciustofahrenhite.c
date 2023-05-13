#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float temperature;
    int choice;

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Choose an option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("%.2f Celsius is equal to %.2f Fahrenheit", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("%.2f Fahrenheit is equal to %.2f Celsius", temperature, fahrenheitToCelsius(temperature));
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
