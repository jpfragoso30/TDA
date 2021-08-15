/*
    Author: Juan P. Fragoso O.
    Title: getInput.c
    Description: All user input components, should print out
    what we want to receive, and retrieve it.
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>

int GetMenuOption()
{
    char option[255];

    printf("Option: ");

    fpurge(stdin);

    fgets(option, 255, stdin);

    return (int)option[0] - 48; //we only get the first character inside the buffer
    //, cast it to be an integer, and translate from ASCII to decimal.
}

float GetRealNumber(int complexId)
{
    float realNumber;

    printf("Complex (#%d) Real Number: ", complexId); //complexId is a must to make sure the user knows the complex number it is currently on

    fpurge(stdin);

    scanf("%f", &realNumber);

    return (float)realNumber;
}

float GetImaginaryNumber(int complexId)
{
    float imaginaryNumber;

    printf("Complex (#%d) Imaginary Number: ", complexId); //complexId is a must to make sure the user knows the complex number it is currently on

    fpurge(stdin);

    scanf("%f", &imaginaryNumber);

    return (float)imaginaryNumber;
}