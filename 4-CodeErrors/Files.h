#ifndef Files_h
#define Files_h

typedef enum        //only define errors that do exist
{                   //all of these are size_t(s) or integers
    MEM_ERROR,      //0 FALSE
    ERROR_OK,       //1 TRUE
    FILE_NOT_FOUND, //2 FALSE
} ERROR_CODE;

FILE *openFile(char *fileName, char *mode);
FILE *closeFile(FILE *file);

#endif