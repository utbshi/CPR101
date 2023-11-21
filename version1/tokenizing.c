#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "tokenizing.h" // Include the custom header file

// V1 

void tokenizing(void) {
    // Print a start message for the demo
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Declare variables
    char words[BUFFER_SIZE];
    char *nextWord = NULL;
    int wordsCounter;

    // Keep asking for input until the user wants to quit
    do {
        printf("Type a few words separated by space (q - to quit):\n");

        // gets the user's input
        fgets(words, BUFFER_SIZE, stdin);

        // Adjust the string length to remove the newline character
        words[strlen(words) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(words, "q") != 0) {
            // Tokenize the words using strtok
            nextWord = strtok(words, " ");
            wordsCounter = 1;

            // Process each tokenized word
            while (nextWord) {
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }

    } while (strcmp(words, "q") != 0);  // Continues until 'q' is entered

    // Print an end message for the demo
    printf("*** End of Tokenizing Words Demo ***\n\n");
}
