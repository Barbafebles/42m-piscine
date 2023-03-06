/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:48:03 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/20 12:21:24 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	m;
	int	mvo;

	m = 0;
	while (m < (size / 2))
	{
		mvo = tab[m];
		tab[m] = tab[size - 1 - m];
		tab[size - 1 - m] = mvo;
		m++;
	}
}