/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:35:43 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/15 18:34:19 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

int	main(void)
{
	char src[] = "Hello";
	char dest[40] = "";
	
	printf("Dest (before): %s\n", dest);
	ft_strcpy(dest, src);
	printf("Dest (after): %s\n", dest);
	
	return (0);
}

*/
