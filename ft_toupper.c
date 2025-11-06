#include "libft.h"

int ft_toupper(int c)
{
    if (('a' <= c) && (c <= 'z')) 
        return (c - OFFSET);
    return (c);
}