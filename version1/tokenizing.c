// TOKENIZING MODULE SOURCE
// Define a macro to suppress certain compiler security warnings and set buffer size
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

// Include the header file for the tokenizing module
#include "tokenizing.h"

// Function definition for tokenizing
void tokenizing()
{
    /* Version 1 */
    // Print the start message for the tokenizing words demonstration
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Declare a character array to store the input string
    char words[BUFFER_SIZE];
    // Declare a character pointer for the next word token
    char *nextWord = NULL;
    // Declare an integer to count the number of words
    int wordsCounter;

    // Loop to process input strings until the user decides to quit
    do
    {
        // Prompt the user to type a few words separated by spaces or 'q' to quit the demo
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0'; // Remove the newline at the end

        // If the input string is not 'q', proceed with tokenizing
        if (strcmp(words, "q") != 0)
        {
            // Get the first token (word)
            nextWord = strtok(words, " ");
            wordsCounter = 1;

            // Loop through the rest of the tokens until there are no more
            while (nextWord)
            {
                // Print each token (word)
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                // Get the next token
                nextWord = strtok(NULL, " ");
            }
        }
        // Continue the loop until 'q' is entered
    } while (strcmp(words, "q") != 0);

    // Print the end message for the tokenizing words demonstration
    printf("*** End of Tokenizing Words Demo ***\n");

    /* Version 2 */

    /* Version 3 */
}