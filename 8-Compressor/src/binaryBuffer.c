#include <stdio.h>
#include <stdlib.h>

#include "binaryBuffer.h"

#define UNIT 1

bbuffer32 newbuffer32(int init_value)
{
    bbuffer32 myBuffer = NULL;

    myBuffer = calloc(UNIT, sizeof(uint32_t));

    if (init_value == 0)
        return myBuffer;
    else
        *myBuffer = init_value;

    return myBuffer;
}