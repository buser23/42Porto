/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:02:03 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/23 16:04:52 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strcount(char *str, char *sep)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		while (str[i] && check_sep(str[i], sep) == 1)
		{
			i++;
		}
		if (str[i] != '\0')
		{
			w++;
		}
		while (str[i] && check_sep(str[i], sep) == 0)
		{
			i++;
		}
	}
	return (w);
}

int	ft_strlen(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && check_sep(str[i], sep) == 0)
	{
		i++;
	}
	return (i);
}

char	*ft_addword(char *str, char *sep)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_strlen(str, sep);
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * ft_strcount(str, charset) + 1);
	while (*str != '\0')
	{
		while (*str && check_sep(*str, charset) == 1)
		{
			str++;
		}
		if (*str != '\0')
		{
			strs[i] = ft_addword(str, charset);
			i++;
		}
		while (*str && check_sep(*str, charset) == 0)
		{
			str++;
		}
	}
	strs[i] = 0;
	return (strs);
}
/*
int	 main(void)
{
	int i;
	char **split;

	split = ft_split("how.are,youdoing there8mate", ", " );

	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}
*/
