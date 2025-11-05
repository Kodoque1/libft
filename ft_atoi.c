#include "libft.h"

static int ft_isspace(char c){
    return (((9 <= c) && (c <= 13)) || c == 32);
}

int ft_atoi(char *str)
{
    int sign;
    int nbr;

    nbr = 0;
    sign = 1;
    while(ft_isspace(*str))
        str++;
    if(*str == '+')
        str++;
    else if(*str == '-')
    {
        sign = -1;
        str++;
    }
    while(ft_isdigit(*str)){
        nbr = nbr * 10 + (*str -'0');
        str++;
    }
    return nbr * sign; 
}