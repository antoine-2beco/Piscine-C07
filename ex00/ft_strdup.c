/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:10:10 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/20 17:10:11 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strdup(char *src)
{
	char	*out;
	int		i;

	out = malloc(sizeof(src));
	if (!out)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*int	main(void)
{
	char *src = "Hello World !";
	printf("%s", ft_strdup(src));
}*/