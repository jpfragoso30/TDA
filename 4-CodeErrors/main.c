#include <stdio.h>
#include <stdlib.h>
#include "./Files.h"

#define READ "a"

int main(void)
{
    char fileName[BUFSIZ] = {"\0"}; //size that C puts on cash memory made for buffers
    char fileBuffer[BUFSIZ] = {"\0"};
    FILE *fileToRead = NULL;

    puts("File you would like to read:");
    fgets(fileName, BUFSIZ, stdin); //using fgets to limitate, and to avoid vulnerabilities/hacks
    //everything is a file, so our keyboard (stdin) will be our file

    fileToRead = openFile(fileName, READ);

    fgets(fileBuffer, BUFSIZ, fileToRead);
    fputs(fileBuffer, stdout);

    //status code
    return 0;
}