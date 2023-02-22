/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:36:59 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/20 17:42:41 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Max number squared inside int is 46340.
// 46240^2 = 2147395600
// (2^31) - 1 = 2147483647 (max int value)
// 46341^2 = 2147488281

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*

int 	main(void)
{
	printf("%d\n", ft_sqrt(25));

	return (0);
}

*/
