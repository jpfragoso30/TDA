/*
    Author: Juan P. Fragoso O.
    Title: index.c
    Description: Main function, cycles through menu options,
    contains cases for adding or multiplying numbers, and
    it goes on until the user decides to stop running the application.
*/

// Libraries
#include <stdio.h>

// Types
#include "types.h"

// Components/Functions
#include "complexNumber.h"
#include "menu.h"
#include "getInput.h"

int main()
{
    int menuOption;
    ComplexNumber *complexNumberResult;

    printf("“\e[1;1H\e[2J"); // Clears the console
    do
    {
        Menu();
        menuOption = GetMenuOption();

        printf("\n");

        if (menuOption == 1)
        {
            complexNumberResult = complexNumberAdd(*newComplexNumber(GetRealNumber(1), GetImaginaryNumber(1)), *newComplexNumber(GetRealNumber(2), GetImaginaryNumber(2)), complexNumberResult);

            printf("\n");

            PrintComplexNumber(*complexNumberResult);
        }
        else if (menuOption == 2)
        {
            complexNumberResult = complexNumberMultiply(*newComplexNumber(GetRealNumber(1), GetImaginaryNumber(1)), *newComplexNumber(GetRealNumber(2), GetImaginaryNumber(2)), complexNumberResult);

            printf("\n");

            PrintComplexNumber(*complexNumberResult);
        }

    } while (menuOption != 3);

    return 0;
}