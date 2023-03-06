/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:09:08 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/15 18:12:29 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mvo;
	int	mvo2;

	mvo = *a / *b;
	mvo2 = *a % *b;
	*a = mvo;
	*b = mvo2;
}