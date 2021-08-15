/*
    Author: Juan P. Fragoso O.
    Title: complexNumber.c
    Description: All complex number functions and displaying component.
*/

// Libraries
#include <stdio.h>
#include <stdlib.h>

// Types
#include "types.h"

ComplexNumber *newComplexNumber(float real, float imag)
{
    ComplexNumber *number = malloc(sizeof(ComplexNumber *));

    number->realNumber = real;
    number->imaginaryNumber = imag;

    return number;
}

ComplexNumber *complexNumberAdd(ComplexNumber n1, ComplexNumber n2, ComplexNumber *result)
{

    result->realNumber = n1.realNumber + n2.realNumber;
    result->imaginaryNumber = n1.imaginaryNumber + n2.imaginaryNumber;

    return result;
}

ComplexNumber *complexNumberMultiply(ComplexNumber n1, ComplexNumber n2, ComplexNumber *result)
{
    result->realNumber = (n1.realNumber * n2.realNumber) - (n1.imaginaryNumber * n2.imaginaryNumber);
    result->imaginaryNumber = (n1.realNumber * n2.imaginaryNumber) + (n1.imaginaryNumber * n2.realNumber);

    return result;
}

void PrintComplexNumber(ComplexNumber n)
{
    printf("Result: (%f) + (%f)i\n", n.realNumber, n.imaginaryNumber);
}