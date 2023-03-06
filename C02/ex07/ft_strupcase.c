/* ************************************************************************** */
/*                                                      :+:      :+:    :+:   */
/*                                                                            */
/*   ft_strupcase.c                                       :::      ::::::::   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:44:43 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/18 23:15:10 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (str[m] >= 'a' && str[m] <= 'z')
		{
			str[m] -= 32;
		}
		m++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "abcdefgh";
	printf("%s", ft_strupcase(str));
}*/