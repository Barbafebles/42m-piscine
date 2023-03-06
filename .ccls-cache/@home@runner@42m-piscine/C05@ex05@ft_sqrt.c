/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:44:12 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 16:32:25 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	while (x <= (nb / x))
	{
		if ((x * x) == nb)
			return (x);
		if ((x * x) > nb)
			return (0);
		++x;
	}
	return (0);
}

/* int	main(void)
{
	int p
		p = 5;
	printf("%d", ft_sqrt(p));
}*/