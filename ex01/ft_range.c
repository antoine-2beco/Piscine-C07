/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:19:22 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/21 10:19:26 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	ints = malloc (sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (!ints)
		return (NULL);
	while (min < max)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}

/*int	main(void)
{
	int	i;

	i = 0;
	while (i != 10)
	{
		printf("%d", ft_range(-2, 8)[i]);
		i++;
	}
	return (0);
}*/
