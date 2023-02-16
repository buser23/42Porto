/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:02:23 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/16 14:35:51 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*

int	main(void)
{
	char src[] = "Hello";
	char dest[40] = "";
	
	printf("Dest (before): %s\n", dest);
	ft_strncpy(dest, src, 3);
	printf("Dest (after): %s\n", dest);

	return (0);

}

*/
