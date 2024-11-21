#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double sum = 0.0;

    // Input the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / pow(i, i); // 1 / i^i
    }

    // Output the result
    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}