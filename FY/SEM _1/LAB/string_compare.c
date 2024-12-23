#include <stdio.h>  // Include the standard input-output header file for printf and scanf functions

int main()  // Main function, execution starts here
{
    char str1[40], str2[40];  // Declare two character arrays (strings) to hold the input strings

    int i, len1 = 0, len2 = 0;  // Declare integers for storing lengths of both strings and loop index i

    // Prompt the user to enter the first string
    printf("Enter first string:\n");
    scanf("%s", str1);  // Read the first string using scanf and store it in str1

    // Prompt the user to enter the second string
    printf("Enter second string:\n");
    scanf("%s", str2);  // Read the second string using scanf and store it in str2

    // Find the length of the first string by looping through each character until '\0' (null terminator)
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;  // Increment the length of the first string
    }

    // Find the length of the second string by looping through each character until '\0' (null terminator)
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;  // Increment the length of the second string
    }

    // If the lengths of the two strings are not equal, they are different
    if (len1 != len2) {
        printf("Given strings are different.\n");  // Output that the strings are different
    } 
    else {  // If the lengths are equal, compare the strings character by character
        int same = 1;  // Flag to track whether strings are the same (assume they are same initially)

        // Compare each character of the two strings
        for (i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {  // If any character is different
                same = 0;  // Set the flag to 0, indicating strings are different
                break;  // Exit the loop as we already know the strings are different
            }
        }

        // If the strings are the same (same = 1), print they are same, otherwise print they are different
        if (same) {
            printf("Given strings are same.\n");  // Output that the strings are the same
        } else {
            printf("Given strings are different.\n");  // Output that the strings are different
        }
    }

    return 0;  // End of the program, return 0 to indicate successful execution
}
