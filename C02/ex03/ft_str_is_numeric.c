/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:59:54 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/18 21:39:19 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (!(str[m] >= 48 && str[m] <= 57))
		{
			return (0);
		}
		m++;
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_numeric("1321341243"));
	printf("\n%d", ft_str_is_numeric("93984573945k9834"));
}*/