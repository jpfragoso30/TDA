#ifndef binaryBuffer_H
#define binaryBuffer_H

#include <stdio.h>
#include <stdint.h>

typedef uint32_t *bbuffer32;

bbuffer32 newbuffer32(int init_value);

#endif