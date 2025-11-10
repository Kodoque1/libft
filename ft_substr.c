/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:06:10 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 15:54:45 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	int		n;

	n = (len + 1) * sizeof(char);
	buf = (char *)malloc((n));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s + start, n);
	return (buf);
}
