/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 05:34:09 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/17 00:44:41 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_number(int q, int j, int k)
{
	char	c;

	c = q + '0';
	write(1, &c, 1);
	c = j + '0';
	write(1, &c, 1);
	c = k + '0';
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	q;
	int	j;
	int	k;

	q = 0;
	while (q <= 9)
	{
		j = q + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_number(q, j, k);
				if (q != 7 || j != 8 || k != 9)
				{
					write(1, ", ", 2);
				}
				k++;
			}
			j++;
		}
		q++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/