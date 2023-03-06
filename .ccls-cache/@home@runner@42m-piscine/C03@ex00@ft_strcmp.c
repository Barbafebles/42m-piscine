/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:18:32 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 02:19:59 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char*s2)
{
	unsigned int	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m] != '\0' && s2[m] != '\0')
	{
			m++;
	}
	return (s1[m] - s2[m]);
}