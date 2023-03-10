/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:05:20 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/08 16:09:55 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to print one char
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*

int	main(void)
{	
	// Call the function to print the char
	ft_putchar('b');

	// Exit code for program
	return (0);
}

*/
