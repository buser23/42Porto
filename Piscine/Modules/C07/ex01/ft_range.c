/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:49:29 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/22 17:41:33 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
		return (NULL);
	p = malloc((max - min) * sizeof(int));
	if (!p)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
/*

int	main(void)
{
	int	i;
	int	min = 1;
	int	max = 5;
	int	*p;

	p = ft_range(min, max);
	printf("Address of p: %p\n", p);

	i = 0;
	while (i < max - min)
	{
		printf("%d\n", p[i]);
		i++;
	}
	free(p);

	return (0);
}

*/
