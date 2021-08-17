#include <stdio.h>
#include <stdlib.h>
#include "ComplexNumber.h"

ComplexNumber newComplexNumber(void)
{
    ComplexNumber my_number = NULL;
    my_number = malloc(sizeof(COMPLEX_NUMBER));
    return my_number;
};

ComplexNumber setComplexNumber(ComplexNumber new_number, float real, float imaginary)
{
    new_number->real = real;
    new_number->imaginary = imaginary;
    return new_number;
};