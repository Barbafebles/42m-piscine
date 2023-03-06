/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:11:47 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/20 12:19:08 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main()
{
	int a;
	int b;
	int div;
	int mod;

	b = 10;
	a = 5;

	printf(" a: %d; b: %d\n", a, b);
	ft_div_mod( a, b, &div, &mod);
	printf("a: %d. b: %d\n, division: %d, resto: %d\n", a, b, div, mod);
}*/