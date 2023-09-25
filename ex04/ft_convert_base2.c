/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:29:59 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/21 18:30:01 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	ft_isbase(char n, char *base)
{
	int	c;

	c = 0;
	if (n == '\n' || n == '\t' || n == '\v' || n == '\f' || n == '\r'
		|| n == ' ' || n == '+' || n == '-')
		return (1);
	while (base[c] != '\0')
	{
		if (base[c] == n)
			return (2);
		c++;
	}
	return (0);
}

int	ft_lenght_nbr(int nbr, char *base)
{
	int				base_lenght;
	unsigned int	nb;
	int				lenght;

	lenght = 0;
	base_lenght = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		lenght++;
	}
	lenght++;
	return (lenght);
}

int	ft_base_int(char *str, int i, int a, char *base)
{
	int	j;
	int	res;
	int	x;
	int	n;

	x = 1;
	n = 1;
	res = 0;
	while (i >= a)
	{
		if (str[i] == '-')
			n *= -1;
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				res = res + (x * j);
				x *= ft_strlen(base);
			}
			j++;
		}
		i--;
	}
	return (res * n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	a;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	a = i;
	while ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] != '\0')
	{
		if (ft_isbase(str[i], base) != 2)
			break ;
		i++;
	}
	return (ft_base_int (str, i - 1, a, base));
}
