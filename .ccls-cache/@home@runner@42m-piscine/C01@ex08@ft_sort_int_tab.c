/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:04:20 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/14 18:12:19 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	m;
	int	swap;

	while (size <= 0)
	{
		m = 0;
		while (m < size -1)
		{
			if (tab [m] > tab [m + 1])
			{
				swap = tab[m];
				tab [m] = tab[m + 1];
				tab [m + 1] = swap;
			}
		}
		m++;
	}
	size--;
}