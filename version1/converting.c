// CONVERTING MODULE SOURCE
// Define macros to suppress certain compiler security warnings and to set buffer size
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

// Include the header file for the converting module
#include "converting.h"

void converting()
{
    /* Version 1 */

    // Print the start message of the conversion demonstration
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare an array of chars to store the input string and an integer to store the converted number
    char intString[BUFFER_SIZE];
    int intNumber;

    // Loop to process input strings until the user decides to quit
    do
    {
        // Prompt the user for an integer string, with 'q' as the option to quit the loop
        printf("Type an int numeric string (q - to quit):\n");

        // Capture the user input and store it in intString
        fgets(intString, BUFFER_SIZE, stdin);

        // Replace the newline character that fgets captures with a null terminator
        intString[strlen(intString) - 1] = '\0';

        // Check if the input is not 'q'; if it's not, proceed with conversion
        if (strcmp(intString, "q") != 0)
        {
            // Convert the input string to an integer using atoi (ASCII to integer) function
            intNumber = atoi(intString);

            // Output the converted integer
            printf("Converted number is %d\n", intNumber);
        }
        // Continue the loop until 'q' is entered
    } while (strcmp(intString, "q") != 0);

    // Print the end message of the conversion demonstration
    printf("*** End of Converting Strings to int Demo ***\n");

    /* Version 2 */

    /* Version 3 */
}
