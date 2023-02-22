/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:27:53 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/22 18:06:57 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ws(char c)
{
	if (c == ' ' || c == 'f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	check_base(char *str, int *base_size)
{
	char	*t;
	int		i;

	i = 0;
	while (*str)
	{
		t = str;
		while (*t)
		{
			if ((t != str && *t == *str)
				|| *t == '-' || *t == '=' || ws(*t))
				return (1);
			t++;
		}
		str++;
		i++;
	}
	if (i <= 1)
		return (1);
	*base_size = i;
	return (0);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (c == *base)
			return (i);
		i++;
		base++;
	}
	return (-1);
}

char	*clean_str(char *str, int *neg)
{
	while (ws(*str))
		str++;
	*neg = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*neg += 1;
		str++;
	}
	return (str);
}

int	ft_atoi_base(char *str, char *base, int *err)
{
	int		neg;
	int		base_size;
	long	num;

	if (check_base(base, &base_size))
	{
		*err = 1;
		return (0);
	}
	str = clean_str(str, &neg);
	num = 0;
	while (*str)
	{
		if (base_index(*str, base) != (-1))
		{
			num = num * base_size;
			num = num + base_index(*str, base);
		}
		else
			break ;
		str++;
	}
	if (neg % 2 == 1)
		num = num * (-1);
	return ((int)num);
}
