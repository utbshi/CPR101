#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Include the custom header file
#include "fundamentals.h"

// Main function where the program starts
int main() {
    // Call the fundamentals function
    fundamentals();

    // Indicate successful program execution
    return 0;
}

// Function definition for the fundamentals module
void fundamentals(void) {
    // Print a start message for the demo
    printf("*** Start of Indexing Strings Demo ***\n");

    // Declare variables
    char buffer[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    // Keep asking for input until the user wants to quit
    do {
        // Ask the user to type a non-empty string (or 'q' to quit)
        printf("Type a non-empty string (q - to quit):\n");
        
        // Read the user's input
        fgets(buffer, BUFFER_SIZE, stdin);

        // Remove the newline character from the input
        buffer[strlen(buffer) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(buffer, "q") != 0) {
            // Ask the user for the character position within the string
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';
            
            // Convert position input to an integer
            position = atoi(numInput);

            // Check if position is within bounds
            if (position >= strlen(buffer)) {
                position = strlen(buffer) - 1;
                printf("Too big... Position reduced to max available.\n");
            }

            // Print the character found at the specified position
            printf("The character found at position %d is '%c'\n", (int)position, buffer[position]);
        }

    } while (strcmp(buffer, "q") != 0);  // Continue until 'q' is entered

    // Print an end message for the demo
    printf("*** End of Indexing Strings Demo ***\n\n");
}
