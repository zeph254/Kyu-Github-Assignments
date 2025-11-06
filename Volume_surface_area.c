// Surface area and volume of a cylinder
/*
Name:            Owuor Zephania Ulare
Reg No:          PA106/G/29218/25
Description:     A C program to calculate the surface area and volume of a cylinder
*/

#include <stdio.h>
#include <math.h>

// Define PI constant
#define M_PI 3.14159265358979323846

int main() {
    double radius, height, surface_area, volume;

    // Prompt user for radius
    printf("Enter the radius of the cylinder in cm: ");
    scanf("%lf", &radius);

    // Prompt user for height
    printf("Enter the height of the cylinder in cm: ");
    scanf("%lf", &height);

    // Calculate surface area
    surface_area = 2 * M_PI * radius * (radius + height);

    // Calculate volume
    volume = M_PI * radius * radius * height;

    // Display results
    printf("\n--- Cylinder Calculations ---\n");
    printf("Surface Area: %.2lf cm^2\n", surface_area);
    printf("Volume: %.2lf cm^3\n", volume);

    return 0;
}
