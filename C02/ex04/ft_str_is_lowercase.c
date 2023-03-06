/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:16:57 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/18 21:52:02 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 97 && str[m] <= 122))
		{
			return (0);
		}
		m++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_lowercase("hello"));
	printf("\n%d", ft_str_is_lowercase("Hello"));
}*/