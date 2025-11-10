/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:05:29 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 12:08:17 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	int		len;

	len = (ft_strlen(s1) + ft_strlen(s1) + 1) * sizeof(char);
	buf = (char *)malloc((ft_strlen(s1) + ft_strlen(s1) + 1) * sizeof(char));
	ft_strlcpy(buf, s1, len);
	ft_strlcat(buf, s2, len);
	return (buf);
}
