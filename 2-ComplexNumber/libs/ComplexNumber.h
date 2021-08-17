/**
*@author Juan Fragoso
*@date 08/17/2021
*@name Complex Number
**/

#ifndef ComplexNumber_h
#define ComplexNumber_h

#define COMPLEX_NUMBER struct _Complex_Number

COMPLEX_NUMBER
{
    float real;
    float imaginary;
};
//Interface
typedef COMPLEX_NUMBER *ComplexNumber;
//Generator/Constructor
ComplexNumber newComplexNumber(void);

#endif //ComplexNumber_h