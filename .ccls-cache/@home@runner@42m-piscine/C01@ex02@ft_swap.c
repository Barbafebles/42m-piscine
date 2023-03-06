/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <bfebles-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:04:16 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/12 09:24:28 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	bav;

	bav = *a;
	*a = *b;
	*b = bav;
}

/*int main()
{
	int y;
	int x;

	x = 2;
	y = 3;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/