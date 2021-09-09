#ifndef Files_h
#define Files_h

typedef enum
{
    MEM_ERROR,
    ERROR_OK,
    FILENAME_ERROR,
    FILE_NOT_FOUND,
} ERROR_CODE;

FILE *openFile(char *fileName, char *mode);
FILE *closeFile(FILE *file);

#endif