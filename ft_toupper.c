#include "libft.h"

int ft_toupper(int c)
{
    if (c == EOF)
        return (-1);
    if (('a' <= c) && (c <= 'z')) 
        return (c - OFFSET);
    return (c);
}