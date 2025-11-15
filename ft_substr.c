/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:06:10 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/14 16:38:34 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnlen(const char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i] && (i < n))
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	size_t	n;

	n = ft_strlen(s);
	if (start >= n)
		return (ft_strdup(""));
	n = ft_strnlen(s + start, len);
	n = (n + 1) * sizeof(char);
	buf = (char *) malloc(n);
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s + start, n);
	return (buf);
}
