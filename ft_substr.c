#include "libft.h"

char* ft_substr(char const *s, unsigned int start, size_t len)
{
    char* buf;

    buf = (char *) malloc((len + 1) * sizeof(char));
    if(!buf)
        return NULL;
    ft_strncpy(buf, s + start, len);
    buf[len]='\0';
    return (buf);
}