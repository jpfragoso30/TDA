#include "types.h"

ComplexNumber *newComplexNumber(float real, float imag);

ComplexNumber *complexNumberAdd(ComplexNumber n1, ComplexNumber n2, ComplexNumber *result);

ComplexNumber *complexNumberMultiply(ComplexNumber n1, ComplexNumber n2, ComplexNumber *result);

void PrintComplexNumber(ComplexNumber n);