/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:39:47 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/13 10:52:57 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*

int	main(void)
{
	int	a;
	int	b;

	a = 56;
	b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("%d divided by %d is %d with a remainder of %d\n", 56, 6, a, b);
	return (0);
}

*/
