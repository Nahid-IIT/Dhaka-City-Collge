#include <stdio.h>

int main() {
    int x, y, *p1, *p2, temp;

    // Input values
    printf("Enter two integers:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    // Display values before swapping
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Assign pointers to the variables
    p1 = &x;
    p2 = &y;

    // Swap the values using pointers
    temp = *p1; // Store the value of x
    *p1 = *p2;  // Assign the value of y to x
    *p2 = temp; // Assign the stored value of x to y

    // Display values after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
