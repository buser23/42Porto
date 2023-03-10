/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:47:32 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/08 17:37:22 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function to print the array
void	ft_print_array(char *a, int n, int max)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a[i++]);
	}
	if (a[0] == max)
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

// Function to implement the increments
void	ft_increments(char *f, char *l, int n)
{
	int	index;
	int	value;

	while (f[0] != l[0])
	{
		index = n - 1;
		while (f[index] == l[index])
		{
			index = index - 1;
		}
		value = ++(f[index]);
		while (index < n)
		{
			f[++index] = ++value;
		}
		ft_print_array(f, n, l[0]);
	}
}

void	ft_print_combn(int n)
{
	char	f[10];
	char	l[10];
	int		i;

	if (n < 1 || n > 9)
	{
		write(1, "N between 1 and 9\n", 18);
	}
	i = 0;
	while (i < n)
	{
		f[i] = i + '0';
		l[i] = (10 - n) + i + '0';
		i++;
	}
	ft_print_array(f, n, l[0]);
	ft_increments(f, l, n);
}

int	main(void)
{
	ft_print_combn(2);
}
