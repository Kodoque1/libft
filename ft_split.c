/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:04:58 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/15 14:33:12 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	mode;
	int	count;

	count = 0;
	mode = 1;
	while (*str)
	{
		if ((*str == c) && !mode)
			mode = 1;
		else if ((*str != c) && mode)
		{
			mode = 0;
			count++;
		}
		str++;
	}
	return (count);
}

static void	position_in_string(const char *s, int *j, int *k, char c)
{
	while (s[*j] == c)
			(*j)++;
		*k = *j;
	while (s[*k] && s[*k] != c)
		(*k)++;
}

static void	free_array(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**strs;

	strs = (char **) malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_word(s, c))
	{
		position_in_string(s, &j, &k, c);
		strs[i] = ft_substr(s, j, k - j);
		if (!strs[i])
		{
			free_array(strs);
			return (NULL);
		}
		j = k;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
