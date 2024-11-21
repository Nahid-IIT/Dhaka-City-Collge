#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Open the file in write mode
    file = fopen("INPUT", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Input data from the keyboard
    printf("Enter data to write into the file (max 100 characters): ");
    fgets(str, sizeof(str), stdin);  // Read a line of text

    // Write data to the file
    fprintf(file, "%s", str);

    // Close the file after writing
    fclose(file);

    // Open the file in read mode
    file = fopen("INPUT", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read and display data from the file
    printf("\nData read from the file:\n");
    while (fgets(str, sizeof(str), file)) {
        printf("%s", str);  // Display the content of the file
    }

    // Close the file after reading
    fclose(file);

    return 0;
}
