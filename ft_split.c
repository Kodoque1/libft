#include "libft.h"

int count_word(const char *str, char c)
{
    int mode;
    int count;

    count = 0;
    mode = 1;
    while(*str)
    {
        if ((*str == c) && !mode)
            mode = 1;
        else if ((*str != c) && mode)
        {
            mode = 0;
            count++;
        }
        str++;
    }
    return (count);
}

char** ft_strsplit(char const *s, char c)
{
    int words;
    int i;
    int j;
    int k;
    char **strs;

    words = count_word(s, c);
    strs = (char **) malloc(sizeof(char *) * (words + 1));
    if (!strs)
        return NULL;
    i = 0;
    j = 0;
    while(i < words)
    {
        while(s[j] == c)
            j++;
        k = j;
        while(s[k] && s[k] != c)
            k++;
        strs[i] = ft_strsub(s, j, k - j);
        j = k;
        i++;
    }
    strs[i] = NULL;
    return (strs);
}