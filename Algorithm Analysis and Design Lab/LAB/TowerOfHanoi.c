#include <stdio.h>

// Function to perform Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: if only one disk, move it directly
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    // Step 1: Move top n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Step 2: Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);
    
    // Step 3: Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;  // Number of disks

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the Tower of Hanoi function
    towerOfHanoi(n, 'A', 'C', 'B');  // A is the source, C is the destination, and B is the auxiliary

    return 0;
}
