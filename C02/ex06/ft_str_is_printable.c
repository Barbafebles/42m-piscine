/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:01:52 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/18 22:40:52 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 32 && str[m] <= 126))
		{
			return (0);
		}
		m++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("ASKDJHFKSJDFHKJSHDF"));
}*/