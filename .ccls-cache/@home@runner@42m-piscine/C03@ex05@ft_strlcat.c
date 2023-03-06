/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:20:23 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 13:27:52 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	x;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	j = ft_strlen(dest);
	x = 0;
	while (src[x] != '\0' && j + 1 < size)
	{
		dest[j] = src[x];
		j++;
		x++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[x]));
}