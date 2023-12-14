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
    printf("*** Start of Converting Strings to int Demo ***\n\n");

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
    printf("*** End of Converting Strings to int Demo ***\n\n");

    /* Version 2 */

    // Print the start message of the demo for converting strings to double precision floating point numbers
    printf("*** Start of Converting Strings to double Demo ***\n");

    // Declare a character array to store the input string and a double for the converted numeric value
    char doubleString[BUFFER_SIZE];
    double doubleNumber;

    // Loop to process input strings until the user decides to quit
    do
    {
        // Prompt the user to type a numeric string representing a double, or 'q' to quit
        printf("Type the double numeric string (q - to quit):\n");

        // Capture the user input and store it in doubleString
        fgets(doubleString, BUFFER_SIZE, stdin);

        // Replace the newline character that fgets captures with a null terminator
        doubleString[strlen(doubleString) - 1] = '\0';

        // Check if the input is not 'q'; if it's not, proceed with conversion
        if ((strcmp(doubleString, "q") != 0))
        {
            // Convert the input string to a double precision number using atof (ASCII to float) function
            doubleNumber = atof(doubleString);

            // Output the converted double precision number
            printf("Converted number is %f\n", doubleNumber);
        }
        // Continue the loop until 'q' is entered
    } while (strcmp(doubleString, "q") != 0);

    // Print the end message of the conversion demo
    printf("*** End of Converting Strings to double Demo ***\n");

    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];
    long longNumber;
    do
    {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);
        longString[strlen(longString) - 1] = '\0'; // Remove the newline at the end
        if ((strcmp(longString, "q") != 0))
        {                                                    // Check if the user wants to quit
            longNumber = atol(longString);                   // Convert the string to a long integer
            printf("Converted number is %ld\n", longNumber); // Print the converted number
        }
    } while (strcmp(longString, "q") != 0); // Continue until 'q' is entered
    printf("*** End of Converting Strings to long Demo ***\n\n");
}
