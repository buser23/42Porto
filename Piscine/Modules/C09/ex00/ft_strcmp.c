/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:44:29 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/23 14:46:09 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strcmp(char *s1, char *s2);

/*
int main(void)
{
	char s1[] = "HelloC";
	char s2[] = "HelloB";
	int a = ft_strcmp(s1, s2);
	printf("%i\n", a);
}
*/
