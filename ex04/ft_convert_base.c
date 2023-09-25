/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:29:59 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/21 18:30:01 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int	ft_lenght_nbr(int nbr, char *base);
int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	check_base(char *base)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (base[a] != '\0')
	{
		b = a + 1;
		if (base[a] == '+' || base[a] == '-' || base[a] < 33 || base[a] > 126)
			return (0);
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

char	*ft_convert_nbr_base(long a, char *base, char *res, int i)
{
	int	l;

	l = ft_strlen(base);
	printf("base lenght : %d\n", l);
	if (a < 0)
	{
		a = -a;
		res[0] = '-';
	}
	i--;
	printf("i lenght : %d\n", i);
	while (a >= l)
	{
		res[i] = base[a % l];
		a /= l;
		i--;
	}
	if (a < l)
		res[i] = base[a];
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		preres;
	int		res_lenght;

	preres = ft_atoi_base(nbr, base_from);
	if (!(check_base(base_from)) || !(check_base(base_to)))
		return (NULL);
	res_lenght = ft_lenght_nbr(preres, base_to);
	res = malloc(sizeof(char) * (res_lenght));
	if (!res)
		return (NULL);
	res = ft_convert_nbr_base(preres, base_to, res, res_lenght);
	res[res_lenght] = '\0';
	return (res);
}
	/*printf("presres : %d\n", preres);
	printf("malloc lenght :%lu\n", sizeof(char)*(res_lenght));
	printf("lenght : %d\n", res_lenght);
	printf("res : %s\n", res);*/

/*int	main(void)
{
	printf("return : %s", ft_convert_base("   ++----1117",
			"01234567", "0123456798abcdef"));
}*/
