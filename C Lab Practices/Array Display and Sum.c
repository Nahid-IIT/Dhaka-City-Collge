#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements and calculate the sum
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nThe sum of the elements is: %d\n", sum);

    return 0;
}
