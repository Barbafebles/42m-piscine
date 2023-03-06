/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:25:22 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/14 18:29:11 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int n)
{
	if (n >= 10)
	{
		ft_print_numbers(n / 10);
	}
	ft_print_char((n % 10) + '0');
}

void	ft_compare(int n, int m)
{
	if (n < 10)
	{
		ft_print_char('0');
	}
	ft_print_numbers(n);
	ft_print_char(' ');
	if (m < 10)
	{
		ft_print_char('0');
	}
	ft_print_numbers(m);
}

void	ft_print_comb2(void)
{
	int	n;
	int	m;

	n = 0;
	while (n <= 98)
	{
		m = n + 1;
		while (m <= 99)
		{
			ft_compare(n, m);
			m++;
			if (n != 98)
			{
				ft_print_char(',');
				ft_print_char(' ');
			}
		}
	n++;
	m = 0;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/