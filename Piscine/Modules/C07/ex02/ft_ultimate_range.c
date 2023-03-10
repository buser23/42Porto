/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:10:30 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/22 17:42:12 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	if (array != NULL)
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
		*range = array;
		return (i);
	}
	else
		return (i);
	free(array);
}
/*

int	main(void)
{
	int	min = -5;
	int	max = 5;
	int	i;
	int	*range;
	int	size;

	size = max - min;
	printf("Range Size: %d\n\n", ft_ultimate_range(&range, min, max));
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}

	return (0);
}

*/
