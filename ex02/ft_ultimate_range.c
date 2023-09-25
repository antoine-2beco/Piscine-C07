/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:29:21 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/21 11:29:22 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	ints = malloc ((max - min) * sizeof(int));
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!*range)
		return (0);
	return (max - min);
}

/*int	main(void)
{
	int	*range;

	printf("%d", ft_ultimate_range(&range, -5, 84));
}*/
