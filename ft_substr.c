/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:06:10 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 12:08:05 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;

	buf = (char *)malloc((len + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s + start, (len + 1) * sizeof(char));
	buf[len] = '\0';
	return (buf);
}
