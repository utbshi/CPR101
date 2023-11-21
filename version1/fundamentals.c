// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

// Function definition for the fundamentals module
// V1
void fundamentals(void)
{
    // Print a start message for the demo
    // Declare variables
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    // Keep asking for input until the user wants to quit
    do
    {
        // Ask the user to type a non-empty string (or 'q' to quit)
        printf("Type a non-empty string (q - to quit):\n");

        // Read the user's input
        fgets(buffer1, BUFFER_SIZE, stdin);

        // Remove the newline character from the input
        buffer1[strlen(buffer1) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(buffer1, "q") != 0)
        {
            // Ask the user for the character position within the string
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';

            // Convert position input to an integer based on its ASCII
            position = atoi(numInput);

            // Displays error if position is not within bounds
            if (position >= strlen(buffer1))
            {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max available.\n");
            }

            // Print the character found at the specified position
            printf("The character found at position %d is '%c'\n", (int)position, buffer1[position]);
        }

    } while (strcmp(buffer1, "q") != 0); // Continue until 'q' is entered

    // Print an end message for the demo
    printf("*** End of Indexing Strings Demo ***\n\n");
}
