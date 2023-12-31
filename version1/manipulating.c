// MANIPULATING SOURCE
// Define macros to suppress certain compiler security warnings and to set buffer size
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

// Include the header file for the manipulating module
#include "manipulating.h"

// Function definition for manipulating
void manipulating()
{
    /* Version 1 */
    // Print the start message of the demo for concatenating strings
    printf("*** Start of Concatenating Strings Demo ***\n");

    // Declare two character arrays to store the input strings
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    // Loop to process input strings until the user decides to quit
    do
    {
        // Prompt the user for the first string, with 'q' as the option to quit the loop
        printf("Type the 1st string (q - to quit):\n");

        // Capture the first user input and store it in string1
        fgets(string1, BUFFER_SIZE, stdin);

        // Replace the newline character that fgets captures with a null terminator
        string1[strlen(string1) - 1] = '\0';

        // Check if the input is not 'q'; if it's not, ask for the second string
        if ((strcmp(string1, "q") != 0))
        {
            // Prompt the user for the second string
            printf("Type the 2nd string:\n");

            // Capture the second user input and store it in string2
            fgets(string2, BUFFER_SIZE, stdin);

            // Replace the newline character that fgets captures with a null terminator
            string2[strlen(string2) - 1] = '\0';

            // Concatenate string2 to the end of string1
            strcat(string1, string2);

            // Output the concatenated string
            printf("Concatenated string is \'%s\'\n", string1);
        }
        // Continue the loop until 'q' is entered as the first string
    } while (strcmp(string1, "q") != 0);

    // Print the end message of the concatenating strings demonstration
    printf("*** End of Concatenating Strings Demo ***\n");

    /* Version 2 */

    /* Version 3 */
}