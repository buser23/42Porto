/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:26:03 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/22 17:41:03 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		size;

	size = ft_strlen(src) + 1;
	p = malloc(sizeof(char) * size);
	if (!p)
		return (0);
	else
		ft_strcpy(p, src);
	return (p);
}
/*

int	main(void)
{
	char	s[] = "Hello";
	char	*d = ft_strdup(s);
	printf("Source: %s | Dest: %s | LastChar: '%c'\n", s, d, d[5]);
	free(d);

	return (0);
}

*/
