/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:44:12 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/22 16:32:25 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 1)
		return (!power);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}

/* int	main(void)
{
	printf("%d", ft_iterative_power(2, -2));
} */
