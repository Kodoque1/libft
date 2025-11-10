/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:01:40 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/10 12:02:04 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_of_int(int n)
{
	int	i;

	if (n == 0)
		return (1);
	else if (n < 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int len;
	int start;
	long l = n;

	len = size_of_int(n);
	char *buf = (char *)malloc(sizeof(char) * (len + 1));
	buf[len] = '\0';
	start = 0;
	if (l < 0)
	{
		buf[0] = '-';
		l = -l;
		start = 1;
	}
	len--;
	while (len >= start)
	{
		buf[len] = (l % 10) + '0';
		l = l / 10;
		len--;
	}
	return (buf);
}
