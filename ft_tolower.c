#include "libft.h"

int ft_tolower(int c)
{
    if (c == EOF)
        return (-1);
    if (('A' <= c) && (c <= 'Z'))
        return (c + OFFSET);
    return (c);
}