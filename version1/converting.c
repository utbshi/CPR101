// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// V1

void converting(void){
   printf("*** Start of Converting Strings to int Demo ***\n");
   char    intString[BUFFER_SIZE];
   int     intNumber;
   // Repeats the loop until the User decides to quit
   do  { 
        printf("Type an int numeric string (q- to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin); // Gets a String Input from user and stores it in intString
        intString[strlen(intString) -1] = '\0'; // sets the last character of the Input to NULL
        if (strcmp(intString, "q") !=0) { // if the userInput is not q, it converts the character user entered into its ASCII number
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
   } while (strcmp(intString, "q") !=0);
   printf("*** End of Converting Strings to int Demo ***\n\n");
}