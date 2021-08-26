/**
*@author Juan Fragoso
*@date 08/17/2021
*@name Complex Number
**/

#ifndef ComplexNumber_h
#define ComplexNumber_h

#define COMPLEX_NUMBER struct _Complex_Number

//Concept/DataStructure
COMPLEX_NUMBER
{
    float real;
    float imaginary;
};
//Interface
typedef COMPLEX_NUMBER *ComplexNumber;
//Generator/Constructor
ComplexNumber newComplexNumber(void);

ComplexNumber setComplexNumber(ComplexNumber phasor, float real, float imaginary);

ComplexNumber getComplexNumberComponents(ComplexNumber phasor, float *real, float *imaginary);

ComplexNumber freeComplexNumber(ComplexNumber target);

float getReal(ComplexNumber number);

float getImaginary(ComplexNumber number);

#endif //ComplexNumber_h