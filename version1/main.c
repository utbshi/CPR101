#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
#include "manipulating.h"
#include "converting.h"
#include "tokenizing.h"
/* Initializes the main function */
int main(void)
{
    char buff[10];
    // Keeps repeating unless user wants to quit
    do
    {
        printf("1 - Fundamentals\n");
        printf("2 - Manipulating\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Whcih module to run? \n");
        fgets(buff, 10, stdin);
        // Runs the modules based on the user Input
        switch (buff[0])
        {
        case '1':
            fundamentals();
            break;
        case '2':
            manipulating();
            break;
        case '3':
            converting();
            break;
        case '4':
            tokenizing();
            break;
        }
    } while (buff[0] != '0');
    return 0;
}