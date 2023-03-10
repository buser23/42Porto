/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:39:53 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/15 18:53:02 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (next == 1)
			{
				str[i] = str[i] - 32;
			}
			next = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{	
			next = 0;
		}
		else
			next = 1;
		i++;
	}
	return (str);
}
/*

int	main(void)
{	
	char str[] = "ola, tudo bem? 42Palavras quarenta-e-duas; cinquenta+e+um";

	printf("String Capitalized: %s\n", ft_strcapitalize(str));
	return (0);
}

*/
