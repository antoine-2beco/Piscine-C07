/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:29:21 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/26 18:54:29 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_malloclen(char **strs, char *sep, int size)
{
	int	i;
	int	k;
	int lenght;

	i = 0;
	k = 0;
	lenght = 0;
	while (sep[lenght] != '\0')
		lenght++;
	lenght *= (size - 1);
	i = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			k++;
			lenght++;
		}
		i++;
	}
	return (lenght + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		l;
	char	*out;

	i = 0;
	k = 0;
	l = 0;
	out = malloc(ft_malloclen(strs, sep, size));
	if (!out)
		return (NULL);
	if (size == 0)
		return (out);
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
			out[l++] = strs[i][k++];
		k = 0;
		while (sep[k] != '\0' && i != (size - 1))
			out[l++] = sep[k++];
		i++;
	}
	out[l] = '\0';
	return (out);
}

/*int	main(void)
{
	int size = 4;
	char *strs[] = {"abc", "def", "jkl", "mno"};
	char *sep = " - ";
	printf("%s", ft_strjoin(size, strs, sep));
}*/