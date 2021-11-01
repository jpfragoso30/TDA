#include <stdio.h>
#include <stdlib.h>
#include "./Files.h"

static ERROR_CODE Exists(FILE *fileQuery)
{
    if (fileQuery == NULL)
    {
        fprintf(stderr, "FILE NOT FOUND ERROR %d IN %s: LINE %d\n", FILE_NOT_FOUND, __FILE__, __LINE__);
        return FILE_NOT_FOUND;
    }
    else
        return ERROR_OK;
}

FILE *openFile(char *fileName, char *mode)
{
    FILE *newFile = NULL;

    newFile = fopen(fileName, mode);
    fprintf(stderr, "%p\n", newFile);

    if (Exists(newFile) != FILE_NOT_FOUND)
    {
        return newFile;
    }
    else
    {
        fputs("File not found\n", stderr);
        return NULL;
    }
}

FILE *closeFile(FILE *file)
{
    fclose(file);

    file = NULL;

    return file;
}