/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:02:59 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 19:27:27 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	m;

	m = 0;
	while ((s1[m] != '\0' || s2[m] != '\0') && m < n)
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	m++;
	}
	return (0);
}