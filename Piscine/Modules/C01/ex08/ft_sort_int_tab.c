/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:17:48 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/13 12:08:41 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size --;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
/*

int	main(void)
{
	int tab[5] = {1, 5, 3, 8, 2};
	int i = 0;

	ft_sort_int_tab(&tab[0], 5);
	printf("Ascending Ordered Array: ");
	while(i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}

*/
