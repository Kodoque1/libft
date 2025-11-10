/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:05:18 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 16:48:07 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = (ft_strlen(s) + 1) * sizeof(char);
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}
