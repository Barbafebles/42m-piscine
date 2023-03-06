/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:18:52 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 00:53:12 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	m;
	unsigned int	x;

	m = 0;
	while (dest[m])
	{
		m++;
	}
	x = 0;
	while (src[x] && x < nb)
	{
		dest[m + x] = src[x];
			x++;
	}
	dest[m + x] = '\0';
	return (dest);
}