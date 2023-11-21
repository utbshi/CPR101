// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1


// Function definition for the manipulating module
void manipulating(void) {
    // Print a start message for the demo
    printf("*** Start of Concatenating Strings Demo ***\n");

    // Declare variables
    char string1[BUFFER_SIZE * 2];
    char string2[BUFFER_SIZE];

    // Keep asking for input until the user wants to quit
    do {
        // Ask the user to type the 1st string (or 'q' to quit)
        printf("Type the 1st string (q - to quit):\n");

        // Read the user's input
        fgets(string1, BUFFER_SIZE, stdin);

        // Adjust the string length to remove the newline character
        string1[strlen(string1) - 1] = '\0';

        // Makes sure that the first user input is not to quit
        if (strcmp(string1, "q") != 0) {
            // Ask the user to input the 2nd string
            printf("Type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);

            // Adjust the string length to remove the newline character
            string2[strlen(string2) - 1] = '\0';

            // Concatenate the strings
            strcat(string1, string2);

            // Print the concatenated string
            printf("Concatenated string is '%s'\n", string1);
        }

    } while (strcmp(string1, "q") != 0);  // Continue until 'q' is entered

    // Print an end message for the demo
    printf("*** End of Concatenating Strings Demo ***\n\n");
}