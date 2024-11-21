#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c; // Sides of the triangle
    float perimeter, semi_perimeter, area;

    // Input the sides of the triangle
    printf("Enter the three sides of the triangle:\n");
    scanf("%f%f%f", &a, &b, &c);

    // Calculate the perimeter
    perimeter = a + b + c;

    // Calculate the semi-perimeter
    semi_perimeter = perimeter / 2;

    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Use Heron's formula to calculate the area
        area = sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));

        // Output the results
        printf("Perimeter of the triangle: %.2f\n", perimeter);
        printf("Area of the triangle: %.2f\n", area);
    } else {
        printf("The entered sides do not form a valid triangle.\n");
    }

    return 0;
}