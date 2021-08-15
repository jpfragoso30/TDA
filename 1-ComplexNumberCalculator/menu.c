/*
    Author: Juan P. Fragoso O.
    Title: menu.c
    Description: Menu component, displays the  menu header, with its options
    in an ascending numbered list.
*/

// Libraries
#include <stdio.h>

void Menu()
{
    char *menuOptions[3] = {"Sum 2 complex numbers", "Multiply 2 complex numbers", "Quit application"};

    printf("\n\n\n");
    printf("Menu:\n"); // header
    for (int iterator = 0; iterator < sizeof(menuOptions) / sizeof(menuOptions[0]); iterator++)
    {
        printf("\t%d. %s\n", iterator + 1, menuOptions[iterator]); // ascending numbered list
    }
    printf("\n\n");
}