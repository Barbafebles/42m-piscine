/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:51:35 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/18 22:35:13 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 65 && str[m] <= 90))
		{
			return (0);
		}
		m++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_uppercase("HELLO"));
	printf("\n%d", ft_str_is_uppercase("HeLlO"));
}*/