#include "libft.h"

char* ft_strdup(const char *s)
{
    char *str;
    int len;

    len = (ft_strlen(s) +1) * sizeof(char);
    str = (char *) malloc((ft_strlen(s) +1) * sizeof(char));
    if(!str)
        return NULL;
    ft_strlcat(str, s, len);
    return (str);
}