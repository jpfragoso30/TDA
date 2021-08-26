#include <stdio.h>
#include <stdlib.h>
#include "../libs/ComplexNumber.h"

ComplexNumber newComplexNumber(void)
{
    ComplexNumber my_number = NULL;
    my_number = malloc(sizeof(COMPLEX_NUMBER));
    return my_number;
};

ComplexNumber setComplexNumber(ComplexNumber phasor, float real, float imaginary)
{
    phasor->real = real;
    phasor->imaginary = imaginary;
    return phasor;
};

ComplexNumber getComplexNumberComponents(ComplexNumber phasor, float *real, float *imaginary)
{
    *real = phasor->real;
    *imaginary = phasor->imaginary;
    return phasor;
};

ComplexNumber freeComplexNumber(ComplexNumber target)
{
    free(target);
    target = NULL;
    return target;
};

float getReal(ComplexNumber number)
{
    return number->real;
};

float getImaginary(ComplexNumber number)
{
    return number->imaginary;
};