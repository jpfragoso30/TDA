#include <stdio.h>
#include <stdlib.h>
#include "./Files.h"

//private functions or static functions

static ERROR_CODE Exists(FILE *fileQuery)
{
    if (fileQuery == NULL)
    {
        fprintf(stderr, "FILE ERROR %d", FILE_NOT_FOUND);
        return FILE_NOT_FOUND;
        exit(FILE_NOT_FOUND);
    }
    else
        return ERROR_OK;
}

//public functions

FILE *openFile(char *fileName, char *mode)
{ //pipes - data flows inside PC
    FILE *newFile = NULL;

    newFile = fopen(fileName, mode);

    //error codes - validations
    if (Exists(newFile)) // if 1 === true
    {
        return newFile;
    }
    else
    {
        return NULL;
    }
}

FILE *closeFile(FILE *file)
{
    fclose(file);

    file = NULL;

    return file;
}