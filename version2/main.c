// Define a macro to suppress certain compiler security warnings
#define _CRT_SECURE_NO_WARNINGS

// Include header files for the different modules
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"

// Main function entry point
int main(void)
{
    // Declare a character array to store the user's menu selection
    char buff[10];

    // Loop to display the menu and process the user's selection
    do
    {
        // Print the menu options
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        // Prompt the user to choose a module to run
        printf("Which module to run? \n");

        // Read the user's menu selection from standard input
        fgets(buff, 10, stdin);

        // Use a switch statement to call the appropriate module function based on the user's selection
        switch (buff[0])
        {
        case '1':
            fundamentals();
            break; // Call the fundamentals function
        case '2':
            manipulating();
            break; // Call the manipulating function
        case '3':
            converting();
            break; // Call the converting function
        case '4':
            tokenizing();
            break; // Call the tokenizing function
            // If '0' is entered, exit the loop
        }
        // Continue the loop until '0' is entered
    } while (buff[0] != '0');

    // Return 0 to indicate successful completion
    return 0;
}
