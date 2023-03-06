/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfebles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:35:26 by bfebles-          #+#    #+#             */
/*   Updated: 2023/02/19 01:39:31 by bfebles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if (str[m] >= 'A' && str[m] <= 'Z')
			str[m] += 32;
		m++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	m;
	int	z;

	m = 0;
	z = 1;
	ft_strlowcase(str);
	while (str[m] != '\0')
	{
		if (str[m] >= 'a' && str[m] <= 'z')
		{
			if (z == 1)
			str[m] -= 32;
			z = 0;
		}
		else if (str[m] >= '0' && str[m] <= '9')
			z = 0;
		else
			z = 1;
		m++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char	prueba[] = "estamos perdiendo la cabeza";
	ft_strcapitalize(prueba);
	printf("%s", prueba);
	return (0);
}*/