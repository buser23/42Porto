/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:19:57 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/13 10:51:27 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;	

	a = 20;
	b = 6;
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d divided by %d is %d\n", a, b, div);
	printf("Mod: %d remainder by %d is %d\n", a, b, mod);
	return (0);
}

*/
