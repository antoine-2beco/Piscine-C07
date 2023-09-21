/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:29:21 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/21 11:29:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	ints = malloc ((max - min) * sizeof(int));
	if (!ints)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		ints[i] = min;
		min++;
		i++;
	}
	return (ints);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (!*range)
		return (0);
	return (max - min);
}

/*int	main(void)
{
	int	*range;

	printf("%d", ft_ultimate_range(&range, -5, 84));
}
*/