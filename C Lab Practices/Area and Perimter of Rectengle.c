#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Calculate the perimeter of the rectangle
    perimeter = 2 * (length + width);

    // Output the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}