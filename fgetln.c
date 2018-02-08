#include "fgetln.h"

char *fgetln(FILE* file)
{
    char* buf;
    buf = malloc (sizeof(char));
    unsigned char char_tmp;
    size_t buf_len = 1;
    
    do
    {
        char_tmp = fgetc(file);
        buf[buf_len-1] = char_tmp;
        buf_len ++;
        buf = realloc(buf, buf_len);
    }while( (char_tmp != '\n') && (char_tmp != EOF) );
    buf[buf_len] = '\0';
    
    return buf;
}
