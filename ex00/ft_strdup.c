/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:10:10 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/20 17:10:11 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *out;
	int	i;
	
	out = malloc(sizeof(src));
	i = 0;
	while (src[i] != '\0')
	{
		out[i] = src[i];
		i++;
	}
	return (out);
}

int	main(void)
{
	char *src = "Hello World !";
	printf("%s", ft_strdup(src));
}