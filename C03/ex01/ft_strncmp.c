/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:32:24 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/20 10:33:15 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*

int	main(void)
{
	printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
		
	return (0);
}

*/
