#include "libft.h"

static int l_isspace(int c, const char* charset)
{
    while(*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0);
}

char *ft_strtrim(char const *s, const char* charset)
{
    int i;
    int j;

    i = 0;
    while(l_isspace(s[i], charset))
        i++;
    j = i;
    while(s[j])
        j++;
    j--;
    while(l_isspace(s[j], charset))
        j--;
    return (ft_substr(s, i, j - i + 1));
}