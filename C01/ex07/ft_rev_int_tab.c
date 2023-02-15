/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:06:22 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/13 11:44:02 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*

int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int i = 0;

	ft_rev_int_tab(&tab[0], 5);
	printf("Inverted Array: ");
	while(i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}

	return (0);
}

*/
