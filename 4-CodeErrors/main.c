#include <stdio.h>
#include <stdlib.h>
#include "./Files.h"

#define READ "r"
#define IS ==

int main(void)
{
    char fileName[BUFSIZ] = {"\0"};
    char content[BUFSIZ] = {"\0"};
    FILE *fileToRead = NULL;

    puts("File you would like to read:");
    gets(fileName);
    fprintf(stderr, "%s\n%s\n", __FILE__, fileName);

    fileToRead = openFile(fileName, READ);
    if (fileToRead IS NULL)
        return FILE_NOT_FOUND;
    fprintf(stderr, "FILE %s OPENED SUCCESSFULLY\n", fileName);

    fgets(content, BUFSIZ, fileToRead);
    printf("File content:\n\t");
    puts(content);

    return ERROR_OK;
}