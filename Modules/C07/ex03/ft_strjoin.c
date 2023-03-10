/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:01:46 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/22 17:42:44 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	total_len(int count, char **strs, char *sep)
{
	int	i;
	int	j;
	int	c;

	c = ft_strlen(strs[0]);
	j = ft_strlen(sep);
	i = 0;
	while (i < count)
	{
		c = c + j;
		c = c + ft_strlen(strs[i]);
		i++;
	}
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*td;
	char	*ts;

	td = dest;
	ts = src;
	while (*td)
	{
		td++;
	}
	while (*ts)
	{
		*td = *ts;
		td++;
		ts++;
	}
	*td = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*s;

	if (size == 0)
		return (malloc(sizeof(char)));
	total_size = total_len(size, strs, sep) + 1;
	s = malloc(sizeof(char) * total_size);
	if (s == NULL)
		return (NULL);
	s[0] = 0;
	s = ft_strcat(s, strs[0]);
	i = 1;
	while (i < size)
	{
		s = ft_strcat(s, sep);
		s = ft_strcat(s, strs[i]);
		i++;
	}
	return (s);
}
/*

int	main(int argc, char **argv)
{
	char	*s = ft_strjoin(argc - 1, argv + 1, "# #");
	printf("%s\n", s);
	free(s);

	return (0);
}

*/
