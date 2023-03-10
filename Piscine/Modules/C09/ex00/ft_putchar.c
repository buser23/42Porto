/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:43:28 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/23 14:43:38 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
int	main(void)
{
	char a = '2';
	ft_putchar(a);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
