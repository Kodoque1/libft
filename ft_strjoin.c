#include "libft.h"

char* ft_strjoin(char const *s1, char const* s2)
{
    char *buf;
    int len;

    len = (ft_strlen(s1) + ft_strlen(s1) +1 ) * sizeof(char);
    buf = (char *) malloc((ft_strlen(s1) + ft_strlen(s1) +1 ) * sizeof(char));
    ft_strlcat(buf, s1, len);
    ft_strlcat(buf, s2, len);
    return (buf);
}