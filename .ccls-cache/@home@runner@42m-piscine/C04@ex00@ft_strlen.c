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
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	return (m);
}

/*
#include <stdio.h>
int main(void)

{
    char str[] = "Hola, mundo!";
    int length = ft_strlen(str);
    printf("La longitud del string es: %d\n", length);
    return 0;
}*/