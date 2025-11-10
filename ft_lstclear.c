/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:02:57 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 14:53:56 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	if (*alst)
	{
		ft_lstclear(&((*alst)->next), del);
		ft_lstdelone(*alst, del);
	}
	*alst = NULL;
}
