#include <stdio.h>
#include <stdlib.h>

#include "../libs/Vector.h"

struct _vector
{
    float *elements;
    size_t n_elements;
};

Vector newVector(size_t n_elements)
{
    Vector my_vector = NULL;

    my_vector = malloc(sizeof(struct _vector));
    if (!my_vector)
        return NULL;

    my_vector->elements = calloc(n_elements, sizeof(float));
    my_vector->n_elements = n_elements;
}

Vector setVector(size_t index, float value)
{
}

float getValue(Vector vector, size_t index)
{
}