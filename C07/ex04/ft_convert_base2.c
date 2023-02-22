/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalgado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:33:45 by bsalgado          #+#    #+#             */
/*   Updated: 2023/02/22 17:58:27 by bsalgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ws(char c);
int		check_base(char *str, int *base_size);
int		base_index(char c, char *base);
int		ft_atoi_base(char *str, char *base, int *err);
char	*clean_str(char *str, int *neg);

int	ft_nbr_size(int nbr, int base_size)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / base_size;
	}
	return (i);
}

char	*ft_charcat(char *dest, char c)
{
	char	*td;

	td = dest;
	while (*td)
	{
		td++;
	}
	*td = c;
	*(td + 1) = '\0';
	return (dest);
}

void	to_array(char *out, char *base, long nl, int base_size)
{
	if (nl < 0)
	{
		*out = '-';
		to_array((out + 1), base, -nl, base_size);
	}
	else if (nl / base_size == 0)
	{
		ft_charcat(out, base[nl]);
	}
	else
	{
		to_array(out, base, nl / base_size, base_size);
		ft_charcat(out, base[nl % base_size]);
	}
}

char	*ft_putnbr_base(int nbr, char *base, int *err)
{
	int			nbr_size;
	int			base_size;
	char		*out;
	long		nl;

	nl = nbr;
	if (check_base(base, &base_size) || base_size <= 1)
	{
		*err = 1;
		return (0);
	}
	nbr_size = 0;
	nbr_size = ft_nbr_size(nbr, base_size);
	if (nl == 0)
	{
		out = malloc(sizeof(char) * 2);
		out[0] = base[0];
		out[1] = 0;
		return (out);
	}
	out = malloc(sizeof(char) * (nbr_size + 1));
	to_array(out, base, nl, base_size);
	return (out);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long		nl;
	char		*conv;
	int			err;

	err = 0;
	nl = (long)ft_atoi_base(nbr, base_from, &err);
	if (err)
		return (0);
	conv = ft_putnbr_base(nl, base_to, &err);
	if (err)
		return (0);
	return (conv);
}
/*

int main(void)
{
    char *base_from = "0123456789";
    char *base_to = "01";
    char *nbr = " --+2147483647";
    char *result;
    int e;
    printf("nbr: %i\n", ft_atoi_base(nbr,base_from, &e));
    result = ft_convert_base(nbr, base_from, base_to);
    printf("p: %p\n", result);
    if (result)
        printf("%s\n", result);
    else
        printf("nothing\n");
    free(result);
}

*/
