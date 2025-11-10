/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:05:33 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 18:05:37 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strnlen(dest, n);
	i = 0;
	if (n != len)
	{
		while (src[i] && (i < (n - len - 1)))
		{
			dest[len + i] = src[i];
			i++;
		}
		while ((len + i) < n)
		{
			dest[len + i] = '\0';
			i++;
		}
	}
	return (len + i);
}
