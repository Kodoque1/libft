/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:05:49 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/14 16:37:23 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (((char *) s1)[i] == ((char *) s2)[i]))
		i++;
	if (i == n)
		return (0);
	else
		return ((((unsigned char *) s1)[i]) - ((unsigned char *) s2)[i]);
}
