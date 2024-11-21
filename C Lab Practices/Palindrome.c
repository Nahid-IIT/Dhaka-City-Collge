#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Get the length of the string

    len = strlen(str);

    // Reverse the string manually
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0'; // Add null terminator to the reversed string

    // Check if the string is a palindrome
    for (int i = 0; i < len; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0; // Set to false if characters do not match
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
