// FUNDAMENTALS MODULE SOURCE
// Define macros to suppress certain compiler security warnings and to set buffer sizes
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

// Include the header file for the fundamentals module
#include "fundamentals.h"

void fundamentals()
{
    /* Version 1 */
    // Print the start message of the indexing strings demonstration
    printf("*** Start of Indexing Strings Demo ***\n");

    // Declare a character array to store the input string and a character array for numeric input
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];

    // Declare a variable to store the index position as size_t for compatibility with the return type of strlen
    size_t position;

    // Loop to process input strings until the user decides to quit
    do
    {
        // Prompt the user to type a non-empty string or 'q' to quit
        printf("Type not empty string (q - to quit):\n");

        // Capture the user input and store it in buffer1
        fgets(buffer1, BUFFER_SIZE, stdin);

        // Replace the newline character that fgets captures with a null terminator
        buffer1[strlen(buffer1) - 1] = '\0';

        // Check if the input is not 'q'; if it's not, ask for the character position
        if (strcmp(buffer1, "q") != 0)
        {
            // Prompt the user to input the character position within the string
            printf("Type the character position within the string:\n");

            // Capture the numeric input for position and replace the newline character
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';

            // Convert the numeric input to a size_t using atoi (ASCII to integer) function
            position = atoi(numInput);

            // If the position is larger than the string length, adjust it to the maximum valid index
            if (position >= strlen(buffer1))
            {
                position = strlen(buffer1) - 1;
                // Output a warning message if the position is adjusted
                printf("Too big... Position reduced to max. available\n");
            }

            // Output the character found at the given position
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
        }
        // Continue the loop until 'q' is entered
    } while (strcmp(buffer1, "q") != 0);

    // Print the end message of the indexing strings demonstration
    printf("*** End of Indexing Strings Demo ***\n");

    /* Version 2 */

    // Print the start message of the demo for measuring the lengths of strings
    printf("*** Start of Measuring Strings Demo ***\n");

    // Declare a character array to store the input string
    char buffer2[BUFFER_SIZE];

    // Loop to process input strings until the user decides to quit
    do
    {
        // Prompt the user to type a string or 'q' to quit the demo
        printf("Type a string (q - to quit):\n");

        // Read the string from the user and store it in buffer2
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Replace the newline character that fgets captures with a null terminator
        buffer2[strlen(buffer2) - 1] = '\0';

        // Check if the input string is not 'q', which is the quit command
        if (strcmp(buffer2, "q") != 0)
        {
            // Print the length of the input string using strlen function
            printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
        }
        // Continue the loop until 'q' is entered
    } while (strcmp(buffer2, "q") != 0);

    // Print the end message of the measuring strings demo
    printf("*** End of Measuring Strings Demo ***\n");

    /* Version 3 */
    
}
