/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:19:22 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 01:04:49 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	m;
	int	x;

	m = 0;
	x = 0;
	if (to_find[x] == '\0')
		return (str);
	while (str[m] != '\0')
	{
		while (str[x + m] == to_find[x] && str[m + x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (str + m);
		m++;
		x = 0;
	}
	return (0);
}