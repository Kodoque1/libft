#include "libft.h"

void ft_lstclear(t_list **alst, void (*del)(void *, size_t))
{
    if(*alst)
    {
        ft_lstclear(&((*alst)->next), del);
        ft_lstdelone(alst, del);
    }   
}