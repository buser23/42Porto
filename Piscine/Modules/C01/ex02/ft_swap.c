/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:59:19 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/13 10:50:21 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Function to change the content of two numbers
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("Before change: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("After change: a = %d, b = %d\n", a, b);
	return (0);
}

*/
