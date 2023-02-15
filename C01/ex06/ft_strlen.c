/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:47:56 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/13 15:20:07 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
	return (i);
}
/*

int	main(void)
{
	char	str[] = "Hello, World";

	printf("The length of '%s' is  %d\n", str, ft_strlen(str));
	return (0);
}

*/
