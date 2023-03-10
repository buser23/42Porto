/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:46:29 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/23 14:47:19 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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
int main(void)
{
	char *str = "Hello world!";
	char *stra = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int length = ft_strlen(str);
	int length_1 = ft_strlen(stra);

	printf("%i\n", length);
	printf("%i\n", length_1);
}
*/
