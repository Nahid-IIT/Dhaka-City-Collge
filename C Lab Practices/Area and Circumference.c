#include <stdio.h>
#define PI 3.14159 // Define the value of PI

int main() {
    float radius, area, circumference;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Calculate the circumference of the circle
    circumference = 2 * PI * radius;

    // Output the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}