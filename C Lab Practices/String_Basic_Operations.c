#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int length, comparison;

    // Input strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // 1. Find the length of a string
    length = strlen(str1);
    printf("\nLength of the first string: %d\n", length);

    // 2. Copy one string to another
    strcpy(str3, str1);
    printf("String copied to str3: %s\n", str3);

    // 3. Concatenate two strings
    strcat(str1, str2);
    printf("Concatenated string (str1 + str2): %s\n", str1);

    // 4. Compare two strings
    comparison = strcmp(str3, str2);
    if (comparison == 0)
        printf("Strings str3 and str2 are equal.\n");
    else if (comparison < 0)
        printf("String str3 is less than str2.\n");
    else
        printf("String str3 is greater than str2.\n");

    // 5. Reverse a string
    strrev(str3);
    printf("Reversed string (str3): %s\n", str3);

    return 0;
}
