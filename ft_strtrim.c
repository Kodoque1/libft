/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:06:06 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 12:06:50 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	l_isspace(int c, const char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, const char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (l_isspace(s[i], charset))
		i++;
	j = i;
	while (s[j])
		j++;
	j--;
	while (l_isspace(s[j], charset))
		j--;
	return (ft_substr(s, i, j - i + 1));
}
